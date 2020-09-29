#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Emissor.h"

using namespace std;

Emissor::Emissor(){}

Emissor::Emissor(string emissor) {
    SetEmissor(emissor);
}

void Emissor::ValidarEmissor(string emissor) throw (invalid_argument) {
    // Conversão de string emissor para char texto[]
    int n = emissor.length();
    char texto[n + 1];
    strcpy(texto, emissor.c_str());

    int erro = 0, i=0;
    while(texto[i]!='\0')
    {
        if (texto[i] == '-' && texto[i+1] == '-')
            erro++;
        if (texto[i] == '.' && texto[i+1] == '.')
            erro++;
        if (texto[i] == ' ' && texto[i+1] == ' ')
            erro++;
        if (i==0 || texto[i-1]==' ')
        {
            if (texto[i] >= 97 && texto[i]<= 122)
                erro++;
        }
        if (i>29)
        erro++;
        i++;
    }

    if(erro > 0)
            throw invalid_argument("Emissor Inválido.");
}

void Emissor::SetEmissor(string emissor) throw (invalid_argument) {
    ValidarEmissor(emissor);
    this->emissor = emissor;
}


string Emissor::GetEmissor() {
    return this->emissor;
}

void Emissor::Print() const {
    cout << "Emissor: " << this->emissor << endl;
}
