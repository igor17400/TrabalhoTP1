#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>

#include "Usuario.h"
#include "CPF.h"

using namespace std;

Usuario::Usuario(const Nome& nome, const CPF& cpf, const Senha& senha, const Endereco& endereco, const CEP& cep)
    :   cpf(cpf),
        nome(nome),
        senha(senha),
        endereco(endereco),
        cep(cep)
        {}


void Usuario::VerInfoUsuario()
{
    cout << "Informações do Usuário: \n";
    nome.Print();
    cpf.Print();
    endereco.Print();
    cep.Print();
}

bool CheckLogin(string nome, string password)
{
    return true;
}

