#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Numero.h"

using namespace std;

Numero::Numero() {}

Numero::Numero(string numero) {
    SetNumero(numero);
}

void Numero::ValidarNumero(string numero) throw (invalid_argument) {

    int n = numero.length();
    char num[n + 1];
    strcpy(num, numero.c_str());

    int i=0, erro=0, sum=0, dig_verificador = 0;
    while(i<8)
    {
        if(i==6)
        {
            if (num[i]!='-')
                erro++;
        }
        else if(i != 7){
            sum += num[i] - 48;
        }

        i++;
    }
    dig_verificador = sum%6;
    if(erro==1 || dig_verificador != (num[7]-48))
        throw invalid_argument("Número inválido.");
}

void Numero::SetNumero(string numero) throw (invalid_argument) {
    ValidarNumero(numero);
    this->numero = numero;
}

string Numero::GetNumero() {
    return this->numero;
}

void Numero::Print() const {
    cout << "Número: " << this->numero;
}
