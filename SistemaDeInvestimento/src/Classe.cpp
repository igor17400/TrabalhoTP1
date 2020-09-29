#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Classe.h"

using namespace std;

Classe::Classe() {}

Classe::Classe(string texto) {
    SetClasse(texto);
}

void Classe::ValidarClasse(char text[]) throw (invalid_argument) {
    int result;
    result = strcmp(text, "CDB")*strcmp(text, "LCA")*strcmp(text, "LCI")*strcmp(text, "LF")*strcmp(text, "LC");
    if (result != 0)
        throw invalid_argument("Classe inválida.");
}

void Classe::SetClasse(string texto) throw (invalid_argument) {

    int n = texto.length();
    char char_array[n + 1];
    strcpy(char_array, texto.c_str());

    ValidarClasse(char_array);
    this->texto = texto;
}


string Classe::GetClasse() {
    return this->texto;
}

void Classe::Print() const {
    cout << "Classe: " << this->texto << endl;
}
