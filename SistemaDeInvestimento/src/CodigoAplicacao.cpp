#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CodigoAplicacao.h"

using namespace std;

CodigoAplicacao::CodigoAplicacao() {}

CodigoAplicacao::CodigoAplicacao(string codigo) {
    SetCodigoAplicacao(codigo);
}

void CodigoAplicacao::ValidarCodigoAplicacao(char codigo[]) throw (invalid_argument) {
    int x = atoi(codigo);
    if(x>99999 || x == 00000)
        throw invalid_argument("Código de aplicação inválido.");
}

void CodigoAplicacao::SetCodigoAplicacao(string codigo) throw (invalid_argument) {
    int n = codigo.length();
    char char_array[n + 1];
    strcpy(char_array, codigo.c_str());

    ValidarCodigoAplicacao(char_array);
    this->codigo = codigo;
}

string CodigoAplicacao::GetCodigoAplicacao() {
    return this->codigo;
}
void CodigoAplicacao::Print() const {
    cout << "Código de Aplicação: " << this->codigo << endl;
}
