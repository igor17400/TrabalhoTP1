#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CodigoBanco.h"

using namespace std;

CodigoBanco::CodigoBanco(){}

CodigoBanco::CodigoBanco(string codigo){
    SetCodigoBanco(codigo);
}

void CodigoBanco::ValidarCodigoBanco(char codigo[]) throw (invalid_argument) {
    int x = atoi(codigo);
    if(!(x == 341 || x == 001 || x == 237 || x == 104 || x == 033))
        throw invalid_argument("Código de Banco inválido.");
}

void CodigoBanco::SetCodigoBanco(string codigo) throw (invalid_argument) {
    int n = codigo.length();
    char char_array[n + 1];
    strcpy(char_array, codigo.c_str());

    ValidarCodigoBanco(char_array);
    this->codigo = codigo;
}

string CodigoBanco::GetCodigoBanco() {
    return this->codigo;
}

void CodigoBanco::Print() const {
    cout << "Código do Banco: " << this->codigo << endl;
}
