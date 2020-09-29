#include <iostream>
#include <locale.h>
#include <windows.h>

#include "Usuario.h"
#include "Conta.h"
#include "Aplicacao.h"
#include "Produto.h"
#include "Testes.h"

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


    switch(testeNome.run()){
        case TesteNome::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteNome::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeEndereco.run()){
        case TesteEndereco::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteEndereco::FALHA  : cout << "FALHA\n";
                                break;
    }


    switch(testeCEP.run()){
        case TesteSenha::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteSenha::FALHA  : cout << "FALHA\n";
                                break;
    }

     switch(testeCPF.run()){
        case TesteCPF::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCPF::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeSenha.run()){
        case TesteSenha::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteSenha::FALHA  : cout << "FALHA\n";
                                break;
    }

     switch(testeCodigoAplicacao.run()){
        case TesteCodigoAplicacao::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCodigoAplicacao::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeValorAplicacao.run()){
        case TesteValorAplicacao::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteValorAplicacao::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeData.run()){
        case TesteData::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteData::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeCodigoBanco.run()){
        case TesteCodigoBanco::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCodigoBanco::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeCodigoAgencia.run()){
        case TesteCodigoAgencia::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCodigoAgencia::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeNumero.run()){
        case TesteNumero::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteNumero::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeCodigoProduto.run()){
        case TesteCodigoProduto::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCodigoProduto::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeClasse.run()){
        case TesteClasse::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteClasse::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeEmissor.run()){
        case TesteEmissor::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteEmissor::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testePrazo.run()){
        case TestePrazo::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TestePrazo::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeTaxa.run()){
        case TesteTaxa::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteTaxa::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeHorario.run()){
        case TesteHorario::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteHorario::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeValorMinimo.run()){
        case TesteValorMinimo::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteValorMinimo::FALHA  : cout << "FALHA\n";
                                break;
    }

    return 0;
}
