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

    if(!(prazo == 6 || prazo == 12 || prazo == 18 || prazo == 24 || prazo == 30 ||
       prazo == 36 || prazo == 42 || prazo == 48 || prazo == 54 ||
       prazo == 60 || prazo == 66 || prazo == 72))
        throw invalid_argument("Prazo Inválido.");
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
