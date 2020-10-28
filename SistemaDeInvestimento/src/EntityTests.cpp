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



// ------- Teste de Aplicação -------
void EntityTestAplicacao::setUp(){
    entidade = new Aplicacao();
    estado = SUCESSO;
}

void EntityTestAplicacao::tearDown(){
    delete entidade;
}

void EntityTestAplicacao::testarCenarioCodigoAplicacao(){
    try{
        entidade->setCodigoAplicacao(EntityTestAplicacao::VALOR_CODIGO_APLICACAO);
        if(entidade->getCodigoAplicacao().GetCodigoAplicacao() != EntityTestAplicacao::VALOR_CODIGO_APLICACAO){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestAplicacao::testarCenarioValorAplicacao(){
    try{
        entidade->setValorAplicacao(EntityTestAplicacao::VALOR_APLICACAO);
        if(entidade->getValorAplicacao().GetValorAplicacao() != EntityTestAplicacao::VALOR_APLICACAO){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestAplicacao::testarCenarioData(){
    try{
        entidade->setData(EntityTestAplicacao::VALOR_DATA);
        if(entidade->getData().GetData() != EntityTestAplicacao::VALOR_DATA){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int EntityTestAplicacao::run(){
    setUp();
    testarCenarioCodigoAplicacao();
    testarCenarioValorAplicacao();
    testarCenarioData();
    tearDown();
    return estado;
}




// ------- Teste de Produto -------
void EntityTestProduto::setUp(){
    entidade = new Produto();
    estado = SUCESSO;
}

void EntityTestProduto::tearDown(){
    delete entidade;
}

void EntityTestProduto::testarCenarioCodigoProduto(){
    try{
        entidade->setCodigoProduto(EntityTestProduto::VALOR_CODIGO_PRODUTO);
        if(entidade->getCodigoProduto().GetCodigoProduto() != EntityTestProduto::VALOR_CODIGO_PRODUTO){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestProduto::testarCenarioClasse(){
    try{
        entidade->setClasse(EntityTestProduto::VALOR_CLASSE);
        if(entidade->getClasse().GetClasse() != EntityTestProduto::VALOR_CLASSE){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestProduto::testarCenarioEmissor(){
    try{
        entidade->setEmissor(EntityTestProduto::VALOR_EMISSOR);
        if(entidade->getEmissor().GetEmissor() != EntityTestProduto::VALOR_EMISSOR){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestProduto::testarCenarioPrazo(){
    try{
        entidade->setPrazo(EntityTestProduto::VALOR_PRAZO);
        if(entidade->getPrazo().GetPrazo() != EntityTestProduto::VALOR_PRAZO){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestProduto::testarCenarioVencimento(){
    try{
        entidade->setVencimento(EntityTestProduto::VALOR_VENCIMENTO);
        if(entidade->getVencimento().GetData() != EntityTestProduto::VALOR_VENCIMENTO){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestProduto::testarCenarioTaxa(){
    try{
        entidade->setTaxa(EntityTestProduto::VALOR_TAXA);
        if(entidade->getTaxa().GetTaxa() != EntityTestProduto::VALOR_TAXA){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestProduto::testarCenarioHorario(){
    try{
        entidade->setHorario(EntityTestProduto::VALOR_HORARIO);
        if(entidade->getHorario().GetHorario() != EntityTestProduto::VALOR_HORARIO){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void EntityTestProduto::testarCenarioValorMinimo(){
    try{
        entidade->setValorMinimo(EntityTestProduto::VALOR_MINIMO);
        if(entidade->getValorMinimo().GetValorMinimo() != EntityTestProduto::VALOR_MINIMO){
            estado = FALHA;
        }
    } catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int EntityTestProduto::run(){
    setUp();
    testarCenarioCodigoProduto();
    testarCenarioClasse();
    testarCenarioEmissor();
    testarCenarioPrazo();
    testarCenarioVencimento();
    testarCenarioTaxa();
    testarCenarioHorario();
    testarCenarioValorMinimo();
    tearDown();
    return estado;
}
