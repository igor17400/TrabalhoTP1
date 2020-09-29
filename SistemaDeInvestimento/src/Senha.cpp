#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Senha.h"

Senha::Senha() {}

Senha::Senha(string senha) {
    SetSenha(senha);
}

bool Senha::UniqueSenha(string str)
{
    for (int i = 0; i < str.length() - 1; i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                return false;
            }
        }
    }
    return true;
}

void Senha::ValidarSenha(string senha) throw (invalid_argument) {
    if (senha.length() != 6) {
        throw invalid_argument("Senha inválida.");
    }

    if(!UniqueSenha(senha)) {
        throw invalid_argument("Senha inválida.");
    }
}

void Senha::SetSenha(string senha) throw (invalid_argument) {
    ValidarSenha(senha);
    this->senha = senha;
}

string Senha::GetSenha() {
    return this->senha;
}

