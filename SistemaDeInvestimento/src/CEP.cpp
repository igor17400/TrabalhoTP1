#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CEP.h"

using namespace std;

// ------- M�todos de atribui��o de vari�veis -------

CEP::CEP() {}

CEP::CEP(string cep) {
    SetCep(cep);
}

void CEP::ValidarCep(string cep) throw (invalid_argument) {

    // A valida��o de CEP foi realizada de forma que possamos comparar cada range de valores que
    //      que os valores v�lidos de CEP para cada regi�o. Vale a pena observar que a fun��o n�o tem
    //      necessidade de trazer retorno para valores v�lidos de CEP, dado que caso o valor n�o for
    //      v�lido o c�digo ir� parar a sua execu��o.
    std::string::size_type sz;
    long cep_dec = std::stol (cep,&sz);

    if (!( (cep_dec >= 1000000  && cep_dec <= 5999999)  ||
           (cep_dec >= 8000000  && cep_dec <= 8499999)  ||
           (cep_dec >= 20000000 && cep_dec <= 26600999) ||
           (cep_dec >= 70000000 && cep_dec <= 70999999) ||
           (cep_dec >= 40000000 && cep_dec <= 41999999) ||
           (cep_dec >= 60000000 && cep_dec <= 60999999) )) {
        throw invalid_argument("CEP inv�lido.");
    }
}

void CEP::SetCep(string cep) throw (invalid_argument) {
    // Para atribuir o valor de CEP � crucial fazer a sua valida��o previamente.
    //      Caso essa valida��o detecte que o valor inserido � inv�lido ela retornar�
    //      uma exce��o do tipo invalid_argument que � a qual ser� retornada pela classe
    //      de valida��o.
    ValidarCep(cep);
    this->cep = cep;
}

// ------- M�todos de retorno e impress�o de vari�veis -------

string CEP::GetCep() {
    return this->cep;
}

void CEP::Print() const {
    //A fun��o possui como objetivo permitir que seja impresso as informa��es dos atributos definidos na classe.
    // Assim, um simples cout � implementado para que seja impresso o valor desse atributo definido.
    cout << "CEP: " << this->cep << endl;
}
