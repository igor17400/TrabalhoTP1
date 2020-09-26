#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Classe.h"

using namespace std;

Classe::Classe(string texto)
{
    SetClasse(texto);
}

void Classe::ValidarClasse(string texto) throw (invalid_argument) {
    if (texto == "000000") {
        throw invalid_argument("Texto Inválido.");
    }
}

void Classe::SetClasse(string texto) throw (invalid_argument) {
    ValidarClasse(texto);
    this->texto = texto;
}


string Classe::GetClasse() {
    return this->texto;
}

void Classe::Print() const {
    cout << "Classe: " << this->texto << endl;
}
