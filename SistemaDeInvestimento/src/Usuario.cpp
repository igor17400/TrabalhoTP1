#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>

#include "Usuario.h"
#include "CPF.h"
#include "Nome.h"

using namespace std;

Usuario::Usuario() {}

Usuario::Usuario(const Nome &nome, const CPF &cpf, const Senha &senha, const Endereco &endereco, const CEP &cep)
    :   cpf(cpf),
        nome(nome),
        senha(senha),
        endereco(endereco),
        cep(cep)
        {}

void Usuario::setNome(const string str){
    Nome nome(str);
    this->nome = nome;
}

Nome Usuario::getNome() const{
    return this->nome;
}

void Usuario::setCPF(const string str){
    CPF cpf(str);
    this->cpf = cpf;
}

CPF Usuario::getCPF() const{
    return this->cpf;
}

void Usuario::setSenha(const string str){
    Senha senha(str);
    this->senha = senha;
}

Senha Usuario::getSenha() const{
    return this->senha;
}

void Usuario::setEndereco(const string str){
    Endereco endereco(str);
    this->endereco = endereco;
}

Endereco Usuario::getEndereco() const{
    return this->endereco;
}

void Usuario::setCEP(const string str){
    CEP cep(str);
    this->cep = cep;
}

CEP Usuario::getCEP() const{
    return this->cep;
}


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

