#include <iostream>
#include <locale.h>
#include <windows.h>

#include "Usuario.h"
#include "Conta.h"
#include "Aplicacao.h"
#include "Produto.h"
#include "Testes.h"
#include "EntityTests.h"
#include "CntrApresentacaoControle.h"
#include "stubs.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese-brazilian");

    // -------- TESTES -------
    TesteNome testeNome;
    TesteEndereco testeEndereco;
    TesteCEP testeCEP;
    TesteCPF testeCPF;
    TesteSenha testeSenha;
    TesteCodigoAplicacao testeCodigoAplicacao;
    TesteValorAplicacao testeValorAplicacao;
    TesteData testeData;
    TesteCodigoBanco testeCodigoBanco;
    TesteCodigoAgencia testeCodigoAgencia;
    TesteNumero testeNumero;
    TesteCodigoProduto testeCodigoProduto;
    TesteClasse testeClasse;
    TesteEmissor testeEmissor;
    TestePrazo testePrazo;
    TesteTaxa testeTaxa;
    TesteHorario testeHorario;
    TesteValorMinimo testeValorMinimo;


    cout << " \n########### ########### ########### ###########" << endl;
    cout << " ########### TESTES DE DOMÍNIOS ###########" << endl;
    cout << " --------- TesteNome ----------" << endl;
    switch(testeNome.run()){
        case TesteNome::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteNome::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteEndereco ----------" << endl;
    switch(testeEndereco.run()){
        case TesteEndereco::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteEndereco::FALHA  : cout << "FALHA\n";
                                break;
    }


    cout << " --------- TesteCEP ----------" << endl;
    switch(testeCEP.run()){
        case TesteCEP::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCEP::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteCPF ----------" << endl;
     switch(testeCPF.run()){
        case TesteCPF::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCPF::FALHA  : cout << "FALHA\n";
                                break;
    }


    cout << " --------- TesteSenha ----------" << endl;
    switch(testeSenha.run()){
        case TesteSenha::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteSenha::FALHA  : cout << "FALHA\n";
                                break;
    }



    cout << " --------- TesteCodigoAplicacao ----------" << endl;
     switch(testeCodigoAplicacao.run()){
        case TesteCodigoAplicacao::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCodigoAplicacao::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteValorAplicacao ----------" << endl;
    switch(testeValorAplicacao.run()){
        case TesteValorAplicacao::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteValorAplicacao::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteData ----------" << endl;
    switch(testeData.run()){
        case TesteData::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteData::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteCodigoBanco ----------" << endl;
    switch(testeCodigoBanco.run()){
        case TesteCodigoBanco::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCodigoBanco::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteCodigoAgencia ----------" << endl;
    switch(testeCodigoAgencia.run()){
        case TesteCodigoAgencia::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCodigoAgencia::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteNumero ----------" << endl;
    switch(testeNumero.run()){
        case TesteNumero::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteNumero::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteCodigoProduto ----------" << endl;
    switch(testeCodigoProduto.run()){
        case TesteCodigoProduto::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCodigoProduto::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteClasse ----------" << endl;
    switch(testeClasse.run()){
        case TesteClasse::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteClasse::FALHA  : cout << "FALHA\n";
                                break;
    }


    cout << " --------- TesteEmissor ----------" << endl;
    switch(testeEmissor.run()){
        case TesteEmissor::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteEmissor::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TestePrazo ----------" << endl;
    switch(testePrazo.run()){
        case TestePrazo::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TestePrazo::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteTaxa ----------" << endl;
    switch(testeTaxa.run()){
        case TesteTaxa::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteTaxa::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteHorario ----------" << endl;
    switch(testeHorario.run()){
        case TesteHorario::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteHorario::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TesteValorMinimo ----------" << endl;
    switch(testeValorMinimo.run()){
        case TesteValorMinimo::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteValorMinimo::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " \n########### ########### ########### ###########" << endl;


    cout << " ########### TESTES DE ENTIDADES ###########" << endl;

    // -------- TESTES -------
    EntityTestUsuario entityTestUsuario;
    EntityTestConta entityTestConta;
    EntityTestAplicacao entityTestAplicacao;
    EntityTestProduto entityTestProduto;


    cout << " --------- TestUsuario ----------" << endl;
    // Dentro desse teste será executado um teste para cada dominio presente na entidade
    switch(entityTestUsuario.run()){
        case EntityTestUsuario::SUCESSO: cout << "SUCESSO\n";
                                break;
        case EntityTestUsuario::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TestConta ----------" << endl;
    // Dentro desse teste será executado um teste para cada dominio presente na entidade
    switch(entityTestConta.run()){
        case EntityTestConta::SUCESSO: cout << "SUCESSO\n";
                                break;
        case EntityTestConta::FALHA  : cout << "FALHA\n";
                                break;
    }


    cout << " --------- TestAplicacao ----------" << endl;
    // Dentro desse teste será executado um teste para cada dominio presente na entidade
    switch(entityTestAplicacao.run()){
        case EntityTestAplicacao::SUCESSO: cout << "SUCESSO\n";
                                break;
        case EntityTestAplicacao::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << " --------- TestProduto ----------" << endl;
    // Dentro desse teste será executado um teste para cada dominio presente na entidade
    switch(entityTestProduto.run()){
        case EntityTestProduto::SUCESSO: cout << "SUCESSO\n";
                                break;
        case EntityTestProduto::FALHA  : cout << "FALHA\n";
                                break;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << " -------- Fim de testes --------- " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "#################################### " << endl;
    cout << "############  Inicio da interação com o Usuário ############# " << endl;

    // Instancia as controladoras de apresentacao
    CntrApresentacaoControle *cntrApresentacaoControle;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoPessoal *cntrApresentacaoPessoal;
    IApresentacaoProdutosFinanceiros *cntrApresentacaoProdutosFinanceiros;

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoPessoal = new CntrApresentacaoPessoal();
    cntrApresentacaoProdutosFinanceiros = new CntrApresentacaoProdutosFinanceiros();

    // Instancia os stubs de servico.

    IServicoAutenticacao *stubServicoAutenticacao;
    IServicoPessoal *stubServicoPessoal;
    IServicoProdutosFinanceiros *stubServicoProdutosFinanceiros;

    stubServicoAutenticacao = new StubServicoAutenticacao();
    stubServicoPessoal = new StubServicoPessoal();
    //stubServicoProdutosFinanceiros = new StubServicoProdutosFinanceiros();

    // Interliga as controladoras aos stubs.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoPessoal(cntrApresentacaoPessoal);
    cntrApresentacaoControle->setCntrApresentacaoProdutosFinanceiros(cntrApresentacaoProdutosFinanceiros);

    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(stubServicoAutenticacao);

    cntrApresentacaoPessoal->setCntrServicoPessoal(stubServicoPessoal);
    cntrApresentacaoPessoal->setCntrServicoProdutosFinanceiros(stubServicoProdutosFinanceiros);

    cntrApresentacaoProdutosFinanceiros->setCntrServicoProdutosFinanceiros(stubServicoProdutosFinanceiros);

    cntrApresentacaoControle->executar();                                           // Solicita servic apresentacao.

    return 0;
}







