#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CodigoProduto.h"

using namespace std;

CodigoProduto::CodigoProduto(){}

CodigoProduto::CodigoProduto(string codigo){
    SetCodigoProduto(codigo);
}

void CodigoProduto::ValidarCodigoProduto(char codigo[]) throw (invalid_argument) {
    int x = atoi(codigo);
    if(x > 999 || x == 0 || x < 0)
        throw invalid_argument("Codigo Inválido.");
}

void CodigoProduto::SetCodigoProduto(string codigo) throw (invalid_argument) {
    int n = codigo.length();
    char char_array[n + 1];
    strcpy(char_array, codigo.c_str());

    ValidarCodigoProduto(char_array);
    this->codigo = codigo;
}


string CodigoProduto::GetCodigoProduto() {
    return this->codigo;
}

void CodigoProduto::Print() const {
    cout << "CodigoProduto: " << this->codigo << endl;
}
