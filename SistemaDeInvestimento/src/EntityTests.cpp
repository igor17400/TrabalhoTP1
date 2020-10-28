#include "EntityTests.h"

using namespace std;

// ------- Teste de Usuario -------
void EntityTestUsuario::setUp(){
    entidade = new Usuario();
    estado = SUCESSO;
}

void EntityTestUsuario::tearDown(){
    delete entidade;
}

void EntityTestUsuario::testarCenarioNome(){
    try{
        entidade->setNome(EntityTestUsuario::VALOR_NOME);
        if(entidade->getNome().GetNome() != EntityTestUsuario::VALOR_NOME){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestUsuario::testarCenarioCPF(){
    try{
        entidade->setCPF(EntityTestUsuario::VALOR_CPF);
        if(entidade->getCPF().GetCpf() != EntityTestUsuario::VALOR_CPF){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestUsuario::testarCenarioSenha(){
    try{
        entidade->setSenha(EntityTestUsuario::VALOR_SENHA);
        if(entidade->getSenha().GetSenha() != EntityTestUsuario::VALOR_SENHA){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestUsuario::testarCenarioCEP(){
    try{
        entidade->setCEP(EntityTestUsuario::VALOR_CEP);
        if(entidade->getCEP().GetCep() != EntityTestUsuario::VALOR_CEP){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestUsuario::testarCenarioEndereco(){
    try{
        entidade->setEndereco(EntityTestUsuario::VALOR_ENDERECO);
        if(entidade->getEndereco().GetEndereco() != EntityTestUsuario::VALOR_ENDERECO){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int EntityTestUsuario::run(){
    setUp();
    testarCenarioNome();
    testarCenarioCPF();
    testarCenarioSenha();
    testarCenarioCEP();
    testarCenarioEndereco();
    tearDown();
    return estado;
}


// ------- Teste de Conta -------
void EntityTestConta::setUp(){
    entidade = new Conta();
    estado = SUCESSO;
}

void EntityTestConta::tearDown(){
    delete entidade;
}

void EntityTestConta::testarCenarioCodigoBanco(){
    try{
        entidade->setCodigoBanco(EntityTestConta::VALOR_CODIGO_BANCO);
        if(entidade->getCodigoBanco().GetCodigoBanco() != EntityTestConta::VALOR_CODIGO_BANCO){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestConta::testarCenarioCodigoAgencia(){
    try{
        entidade->setCodigoAgencia(EntityTestConta::VALOR_CODIGO_AGENCIA);
        if(entidade->getCodigoAgencia().GetCodigoAgencia() != EntityTestConta::VALOR_CODIGO_AGENCIA){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestConta::testarCenarioNumero(){
    try{
        entidade->setNumero(EntityTestConta::VALOR_NUMERO);
        if(entidade->getNumero().GetNumero() != EntityTestConta::VALOR_NUMERO){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int EntityTestConta::run(){
    setUp();
    testarCenarioCodigoBanco();
    testarCenarioCodigoAgencia();
    testarCenarioNumero();
    tearDown();
    return estado;
}
