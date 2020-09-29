#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CodigoAgencia.h"

using namespace std;

CodigoAgencia::CodigoAgencia() {}

CodigoAgencia::CodigoAgencia(string codigo) {
    SetCodigoAgencia(codigo);
}

void CodigoAgencia::ValidarCodigoAgencia(char codigo[]) throw (invalid_argument) {
    int x = atoi(codigo);
    if(x > 9999 || x == 0000 || x < 0)
        throw invalid_argument("Codigo de agência inválido.");
}

void CodigoAgencia::SetCodigoAgencia(string codigo) throw (invalid_argument) {
    int n = codigo.length();
    char char_array[n + 1];
    strcpy(char_array, codigo.c_str());


    ValidarCodigoAgencia(char_array);
    this->codigo = codigo;
}

string CodigoAgencia::GetCodigoAgencia() {
    return this->codigo;
}

void CodigoAgencia::Print() const {
    cout << "Código da Agência: " << this->codigo << endl;
}
