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

// ------- Teste de Senha -------
void TesteSenha::setUp(){
    // Foi definido valor de senha no construtor, pois se não for definido
    //      o código lançará uma excessão.
    senha = new Senha();
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

// ------- Teste de CodigoAplicacao -------
void TesteCodigoAplicacao::setUp(){
    codigoAplicacao = new CodigoAplicacao();
    estado = SUCESSO;
}

void TesteCodigoAplicacao::tearDown(){
    delete codigoAplicacao;
}

void TesteCodigoAplicacao::testarCenarioSucesso(){
    try{
        codigoAplicacao->SetCodigoAplicacao(TesteCodigoAplicacao::VALOR_VALIDO);
        if (codigoAplicacao->GetCodigoAplicacao() != TesteCodigoAplicacao::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteCodigoAplicacao::testarCenarioFalha(){
    try{
        codigoAplicacao->SetCodigoAplicacao(TesteCodigoAplicacao::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteCodigoAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste de ValorAplicacao -------
void TesteValorAplicacao::setUp(){
    valorAplicacao = new ValorAplicacao();
    estado = SUCESSO;
}

void TesteValorAplicacao::tearDown(){
    delete valorAplicacao;
}

void TesteValorAplicacao::testarCenarioSucesso(){
    try{
        valorAplicacao->SetValorAplicacao(TesteValorAplicacao::VALOR_VALIDO);
        if (valorAplicacao->GetValorAplicacao() != TesteValorAplicacao::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteValorAplicacao::testarCenarioFalha(){
    try{
        valorAplicacao->SetValorAplicacao(TesteValorAplicacao::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteValorAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste Data -------
void TesteData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TesteData::tearDown(){
    delete data;
}

void TesteData::testarCenarioSucesso(){
    try{
        data->SetData(TesteData::VALOR_VALIDO);
        if (data->GetData() != TesteData::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteData::testarCenarioFalha(){
    try{
        data->SetData(TesteData::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste CodigoBanco -------
void TesteCodigoBanco::setUp(){
    codigoBanco = new CodigoBanco();
    estado = SUCESSO;
}

void TesteCodigoBanco::tearDown(){
    delete codigoBanco;
}

void TesteCodigoBanco::testarCenarioSucesso(){
    try{
        codigoBanco->SetCodigoBanco(TesteCodigoBanco::VALOR_VALIDO);
        if (codigoBanco->GetCodigoBanco() != TesteCodigoBanco::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteCodigoBanco::testarCenarioFalha(){
    try{
        codigoBanco->SetCodigoBanco(TesteCodigoBanco::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteCodigoBanco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste CodigoAgencia -------
void TesteCodigoAgencia::setUp(){
    codigoAgencia = new CodigoAgencia();
    estado = SUCESSO;
}

void TesteCodigoAgencia::tearDown(){
    delete codigoAgencia;
}

void TesteCodigoAgencia::testarCenarioSucesso(){
    try{
        codigoAgencia->SetCodigoAgencia(TesteCodigoAgencia::VALOR_VALIDO);
        if (codigoAgencia->GetCodigoAgencia() != TesteCodigoAgencia::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteCodigoAgencia::testarCenarioFalha(){
    try{
        codigoAgencia->SetCodigoAgencia(TesteCodigoAgencia::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteCodigoAgencia::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste Numero -------
void TesteNumero::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TesteNumero::tearDown(){
    delete numero;
}

void TesteNumero::testarCenarioSucesso(){
    try{
        numero->SetNumero(TesteNumero::VALOR_VALIDO);
        if (numero->GetNumero() != TesteNumero::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteNumero::testarCenarioFalha(){
    try{
        numero->SetNumero(TesteNumero::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteNumero::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste COdigoProduto -------
void TesteCodigoProduto::setUp(){
    codigoProduto = new CodigoProduto();
    estado = SUCESSO;
}

void TesteCodigoProduto::tearDown(){
    delete codigoProduto;
}

void TesteCodigoProduto::testarCenarioSucesso(){
    try{
        codigoProduto->SetCodigoProduto(TesteCodigoProduto::VALOR_VALIDO);
        if (codigoProduto->GetCodigoProduto() != TesteCodigoProduto::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteCodigoProduto::testarCenarioFalha(){
    try{
        codigoProduto->SetCodigoProduto(TesteCodigoProduto::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteCodigoProduto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste Classe -------
void TesteClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}

void TesteClasse::tearDown(){
    delete classe;
}

void TesteClasse::testarCenarioSucesso(){
    try{
        classe->SetClasse(TesteClasse::VALOR_VALIDO);
        if (classe->GetClasse() != TesteClasse::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteClasse::testarCenarioFalha(){
    try{
        classe->SetClasse(TesteClasse::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// ------- Teste Emissor -------
void TesteEmissor::setUp(){
    emissor = new Emissor();
    estado = SUCESSO;
}

void TesteEmissor::tearDown(){
    delete emissor;
}

void TesteEmissor::testarCenarioSucesso(){
    try{
        emissor->SetEmissor(TesteEmissor::VALOR_VALIDO);
        if (emissor->GetEmissor() != TesteEmissor::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteEmissor::testarCenarioFalha(){
    try{
        emissor->SetEmissor(TesteEmissor::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteEmissor::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste Prazo -------
void TestePrazo::setUp(){
    prazo = new Prazo();
    estado = SUCESSO;
}

void TestePrazo::tearDown(){
    delete prazo;
}

void TestePrazo::testarCenarioSucesso(){
    try{
        prazo->SetPrazo(TestePrazo::VALOR_VALIDO);
        if (prazo->GetPrazo() != TestePrazo::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TestePrazo::testarCenarioFalha(){
    try{
        prazo->SetPrazo(TestePrazo::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TestePrazo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// ------- Teste Taxa -------
void TesteTaxa::setUp(){
    taxa = new Taxa();
    estado = SUCESSO;
}

void TesteTaxa::tearDown(){
    delete taxa;
}

void TesteTaxa::testarCenarioSucesso(){
    try{
        taxa->SetTaxa(TesteTaxa::VALOR_VALIDO);
        if (taxa->GetTaxa() != TesteTaxa::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteTaxa::testarCenarioFalha(){
    try{
        taxa->SetTaxa(TesteTaxa::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteTaxa::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ------- Teste Horario -------
void TesteHorario::setUp(){
    horario = new Horario();
    estado = SUCESSO;
}

void TesteHorario::tearDown(){
    delete horario;
}

void TesteHorario::testarCenarioSucesso(){
    try{
        horario->SetHorario(TesteHorario::VALOR_VALIDO);
        if (horario->GetHorario() != TesteHorario::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteHorario::testarCenarioFalha(){
    try{
        horario->SetHorario(TesteHorario::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// ------- Teste Valor -------
void TesteValorMinimo::setUp(){
    valorMinimo = new ValorMinimo();
    estado = SUCESSO;
}

void TesteValorMinimo::tearDown(){
    delete valorMinimo;
}

void TesteValorMinimo::testarCenarioSucesso(){
    try{
        valorMinimo->SetValorMinimo(TesteValorMinimo::VALOR_VALIDO);
        if (valorMinimo->GetValorMinimo() != TesteValorMinimo::VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteValorMinimo::testarCenarioFalha(){
    try{
        valorMinimo->SetValorMinimo(TesteValorMinimo::VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteValorMinimo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
