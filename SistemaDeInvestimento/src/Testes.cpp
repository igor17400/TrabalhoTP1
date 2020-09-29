#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "testes.h"

using namespace std;

// ------- Teste de Nome -------
void TesteNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TesteNome::tearDown(){
    delete nome;
}

void TesteNome::testarCenarioSucesso(){
    try{
        nome->SetNome(TesteNome::VALOR_VALIDO);
        if (nome->GetNome() != TesteNome::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteNome::testarCenarioFalha(){
    try{
        nome->SetNome(TesteNome::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// ------- Teste de CPF -------
void TesteCPF::setUp(){
    cpf = new CPF();
    estado = SUCESSO;
}

void TesteCPF::tearDown(){
    delete cpf;
}

void TesteCPF::testarCenarioSucesso(){
    try{
        cpf->SetCpf(TesteCPF::VALOR_VALIDO);
        if (cpf->GetCpf() != TesteCPF::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteCPF::testarCenarioFalha(){
    try{
        cpf->SetCpf(TesteCPF::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteCPF::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste de Endereco -------
void TesteEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}

void TesteEndereco::tearDown(){
    delete endereco;
}

void TesteEndereco::testarCenarioSucesso(){
    try{
        endereco->SetEndereco(TesteEndereco::VALOR_VALIDO);
        if (endereco->GetEndereco() != TesteEndereco::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteEndereco::testarCenarioFalha(){
    try{
        endereco->SetEndereco(TesteEndereco::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste de CEP -------
void TesteCEP::setUp(){
    cep = new CEP();
    estado = SUCESSO;
}

void TesteCEP::tearDown(){
    delete cep;
}

void TesteCEP::testarCenarioSucesso(){
    try{
        cep->SetCep(TesteCEP::VALOR_VALIDO);
        if (cep->GetCep() != TesteCEP::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteCEP::testarCenarioFalha(){
    try{
        cep->SetCep(TesteCEP::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteCEP::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// ------- Teste de Senha -------
void TesteSenha::setUp(){
    // Foi definido valor de senha no construtor, pois se não for definido
    //      o código lançará uma excessão.
    senha = new Senha(TesteSenha::VALOR_VALIDO);
    estado = SUCESSO;
}

void TesteSenha::tearDown(){
    delete senha;
}

void TesteSenha::testarCenarioSucesso(){
    try{
        senha->SetSenha(TesteSenha::VALOR_VALIDO);
        if (senha->GetSenha() != TesteSenha::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteSenha::testarCenarioFalha(){
    try{
        senha->SetSenha(TesteSenha::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

