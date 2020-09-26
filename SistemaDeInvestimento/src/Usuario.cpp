#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>

#include "Usuario.h"

using namespace std;

Usuario::Usuario(string nome, string cpf, string senha, string endereco, string cep) {
    SetNome(nome);
    SetCpf(endereco);
    SetSenha(cep);
    SetEndereco(cpf);
    SetCep(senha);
}

void Usuario::validarNome(string nome) throw (invalid_argument) {
    if(nome.length() < 5 || nome.length() > 30){
        cout << "Nome não pode ter menos que 5 caracteres e mais de 30 caracteres. Nome inserido: " << nome << endl;
        throw invalid_argument("Nome inválido.");
    }
}

void Usuario::SetNome(string nome) throw (invalid_argument) {
    validarNome(nome);
    this->nome = nome;
}

void Usuario::validarCpf(string cpf) throw (invalid_argument) {

    string resultCPF;
    int arrCPF[11];

    for (int loop = 0; loop < cpf.length(); ++loop) {
         switch (cpf[loop]) {
            case '-':
            case '.':
                break;
            default:
               resultCPF += static_cast<unsigned char>(tolower(cpf[loop]));
         }
    }

    for(int i = 0; i < resultCPF.length(); i++) {
        arrCPF[i] = int(resultCPF[i]) - '0';
    }

    if(!checkCPF(arrCPF)){
        throw invalid_argument("CPF inválido.");
    }
}

void Usuario::SetCpf(string cpf) throw (invalid_argument) {
    validarCpf(cpf);
    this->cpf = cpf;
}

void Usuario::SetSenha(string senha) throw (invalid_argument) {
    this->senha = senha;
}

void Usuario::validarEndereco(string endereco) throw(invalid_argument) {

    if(endereco.length() < 5 || endereco.length() > 21){
        cout << "Endereço não pode ter menos que 5 caracteres e mais de 20 caracteres. Endereço inserido: " << endereco << endl;
        throw invalid_argument("Endereço inválido.");
    }

    if(!isupper(endereco[0])) {
        cout << "Endereço precisa conter a primeira letra sendo maiúscula. Endereço inserido: " << endereco << endl;
        throw invalid_argument("Endereço inválido.");
    }

    if(isdigit(endereco[0])) {
        cout << "Endereço não pode conter um número como primeiro caractere. Endereço inserido: " << endereco << endl;
        throw invalid_argument("Endereço inválido.");
    }
}

void Usuario::SetEndereco(string endereco) throw (invalid_argument) {
    validarEndereco(endereco);
    this->endereco = endereco;
}

void Usuario::validarCep(string cep) throw (invalid_argument) {
    if(cep == "0"){
        throw invalid_argument("CEP inválido.");
    }
}

void Usuario::SetCep(string cep) throw (invalid_argument) {
    validarCep(cep);
    this->cep = cep;
}

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

bool Usuario::checkCPF(const int * const cpf)
{
    int digito1,
        digito2,
        temp = 0;

    for(char i = 0; i < 9; i++)
        temp += (cpf[i] * (10 - i));

    temp %= 11;

    if(temp < 2)
        digito1 = 0;
    else
        digito1 = 11 - temp;

    temp = 0;
    for(char i = 0; i < 10; i++)
        temp += (cpf[i] * (11 - i));

    temp %= 11;

    if(temp < 2)
        digito2 = 0;
    else
        digito2 = 11 - temp;

    if(digito1 == cpf[9] && digito2 == cpf[10])
        return true;
    else
        return false;
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

