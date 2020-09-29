#include <iostream>
#include <stdio.h>
#include <sstream>
#include <stdexcept>

#include "Taxa.h"

using namespace std;

Taxa::Taxa() {}

Taxa::Taxa(double taxa) {
    SetTaxa(taxa);
}

void Taxa::ValidarTaxa(double taxa) throw (invalid_argument) {
    if(taxa < 0 || taxa > 200)
        throw invalid_argument("Taxa Inválida.");
}

void Taxa::SetTaxa(double taxa) throw (invalid_argument) {
    ValidarTaxa(taxa);
    this->taxa = taxa;
}


double Taxa::GetTaxa() {
    return this->taxa;
}

void Taxa::Print() const {
    cout << "Taxa: " << this->taxa << endl;
}
