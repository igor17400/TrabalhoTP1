#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CEP.h"

using namespace std;

// ------- Métodos de atribuição de variáveis -------

CEP::CEP() {}

CEP::CEP(string cep) {
    SetCep(cep);
}

void CEP::ValidarCep(string cep) throw (invalid_argument) {

    // A validação de CEP foi realizada de forma que possamos comparar cada range de valores que
    //      que os valores válidos de CEP para cada regiâo. Vale a pena observar que a função não tem
    //      necessidade de trazer retorno para valores válidos de CEP, dado que caso o valor não for
    //      válido o código irá parar a sua execução.
    std::string::size_type sz;
    long cep_dec = std::stol (cep,&sz);

    if (!( (cep_dec >= 1000000  && cep_dec <= 5999999)  ||
           (cep_dec >= 8000000  && cep_dec <= 8499999)  ||
           (cep_dec >= 20000000 && cep_dec <= 26600999) ||
           (cep_dec >= 70000000 && cep_dec <= 70999999) ||
           (cep_dec >= 40000000 && cep_dec <= 41999999) ||
           (cep_dec >= 60000000 && cep_dec <= 60999999) )) {
        throw invalid_argument("CEP inválido.");
    }
}

void CEP::SetCep(string cep) throw (invalid_argument) {
    // Para atribuir o valor de CEP é crucial fazer a sua validação previamente.
    //      Caso essa validação detecte que o valor inserido é inválido ela retornará
    //      uma exceção do tipo invalid_argument que é a qual será retornada pela classe
    //      de validação.
    ValidarCep(cep);
    this->cep = cep;
}

// ------- Métodos de retorno e impressão de variáveis -------

string CEP::GetCep() {
    return this->cep;
}

void CEP::Print() const {
    //A função possui como objetivo permitir que seja impresso as informações dos atributos definidos na classe.
    // Assim, um simples cout é implementado para que seja impresso o valor desse atributo definido.
    cout << "CEP: " << this->cep << endl;
}
