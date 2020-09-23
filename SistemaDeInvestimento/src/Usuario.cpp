#include <iostream>
#include "Usuario.h"
using namespace std;

Usuario::Usuario(string nome, string endereco, string cep, string cpf, string senha)
{
    this->nome = nome;
    this->endereco = endereco;
    this->cep = cep;
    this->cpf = cpf;
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
    this->senha = senha;
}

void Usuario::VerInfoUsuario()
{
    cout << "Informações do Usuário: \n";
    cout << "Nome: " << this->GetNome() << endl;
    cout << "Endereço: " << this->GetEndereco() << endl;
    cout << "CEP: " << this->GetCep() << endl;
    cout << "CPF: " << this->GetCpf() << endl;
}
