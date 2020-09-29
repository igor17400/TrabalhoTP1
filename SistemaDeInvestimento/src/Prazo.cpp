#include <iostream>
#include <stdio.h>
#include <sstream>
#include <stdexcept>

#include "Prazo.h"

using namespace std;

Prazo::Prazo(){}

Prazo::Prazo(int prazo){
    SetPrazo(prazo);
}

void Prazo::ValidarPrazo(int prazo) throw (invalid_argument) {
    if (prazo < 0) {
        throw invalid_argument("Prazo Inválido.");
    }
}

void Prazo::SetPrazo(int prazo) throw (invalid_argument) {
    ValidarPrazo(prazo);
    this->prazo = prazo;
}


int Prazo::GetPrazo() {
    return this->prazo;
}

void Prazo::Print() const {
    cout << "Prazo: " << this->prazo << endl;
}
