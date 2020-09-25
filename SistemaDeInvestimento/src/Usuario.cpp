#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Usuario.h"
using namespace std;

Usuario::Usuario(string nome, string cpf, string senha, string endereco, string cep) {
    SetNome(nome);
    SetCpf(endereco);
    SetSenha(cep);
    SetEndereco(cpf);
    SetCep(senha);}

string Usuario::GetNome() {
    return this->nome;
}

string Usuario::GetEndereco() {
    return this->endereco;
}

string Usuario::GetCep() {
    return this->cep;
}

string Usuario::GetCpf() {
    return this->cpf;
}

string Usuario::GetSenha() {
    return this->senha;
}

void Usuario::SetNome(string nome) {

    try {
        if(nome.length() > 5 || nome.length() > 30){
            this->nome = nome;
        } else {
            throw nome;
        }
    } catch (string nome)
      {
        cout << "Nome não pode ter menos que 5 caracteres e mais de 30 caracteres. Nome inserido: " << nome << endl;
        throw;
      }
}

void Usuario::SetCpf(string cpf) {
    this->cpf = cpf;
}

void Usuario::SetSenha(string senha) {
    this->senha = senha;
}

void Usuario::SetEndereco(string endereco) {
    this->endereco = endereco;
}

void Usuario::SetCep(string cep) {
    this->cep = cep;
}

void Usuario::VerInfoUsuario()
{
    cout << "Informações do Usuário: \n";
    cout << "Nome: " << this->GetNome() << endl;
    cout << "Endereço: " << this->GetEndereco() << endl;
    cout << "CEP: " << this->GetCep() << endl;
    cout << "CPF: " << this->GetCpf() << endl;
}

bool CheckLogin(string nome, string password)
{
    return true;
}

