#include <iostream>
#include "Usuario.h"
using namespace std;

Usuario::Usuario(string nome, string endereco, string cep, string cpf, string senha)
{
    nome = nome;
    endereco = endereco;
    cep = cep;
    cpf = cpf;
    SetSenha(senha);
}

string Usuario::GetNome()
{
    return nome;
}

string Usuario::GetEndereco()
{
    return endereco;
}

string Usuario::GetCep()
{
    return cep;
}

string Usuario::GetCpf()
{
    return cpf;
}

string Usuario::GetSenha()
{
    return senha;
}

void Usuario::SetSenha(string senha)
{
    senha = senha;
}

void Usuario::VerInfoUsuario()
{
    cout << "Informações do Usuário: \n";
    cout << "Nome: " << this->GetNome();
    cout << "Endereço: " << this->GetEndereco();
    cout << "CEP: " << this->GetCep();
    cout << "CPF: " << this->GetCpf();
}

