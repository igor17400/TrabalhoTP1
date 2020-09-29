#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Endereco.h"

using namespace std;


Endereco::Endereco(){}

Endereco::Endereco(string endereco){
    SetEndereco(endereco);
}

void Endereco::ValidarEndereco(string endereco) throw (invalid_argument) {

    int n = endereco.length();
    char texto[n + 1];
    strcpy(texto, endereco.c_str());

    int erro = 0, i=0;
    while(texto[i]!='\0')
    {
        if (texto[i] == '.' && texto[i+1] == '.')
            erro++;
        if (texto[i] == ' ' && texto[i+1] == ' ')
            erro++;
        if (i==0 || texto[i-1]==' ')
        {
            if (texto[i] >= 97 && texto[i]<= 122)
                erro++;
        }
        if (i>19)
        erro++;
        i++;
    }
    if(erro > 0)
        throw invalid_argument("Endereço inválido.");

}

void Endereco::SetEndereco(string endereco) throw (invalid_argument) {
    ValidarEndereco(endereco);
    this->endereco = endereco;
}

string Endereco::GetEndereco() {
    return this->endereco;
}

void Endereco::Print() const {
    cout << "Endereço: " << this->endereco << endl;
}
