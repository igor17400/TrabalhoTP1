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


    cout << " ########### TESTES DE DOM�NIOS ###########" << endl;
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

    cout << " ########### ########### ########### ###########" << endl;


    cout << " ########### TESTES DE ENTIDADES ###########" << endl;
    cout << " --------- Usuario ----------" << endl;

    Usuario usuario;
    usuario.setNome("Igor Lima");
    usuario.setSenha("123456");
    usuario.setCPF("065.891.841-94");
    usuario.setEndereco("Condominio Estancia");
    usuario.setCEP("70350760");
    cout << usuario.getNome().GetNome() << endl;
    cout << usuario.getSenha().GetSenha() << endl;
    cout << usuario.getCPF().GetCpf() << endl;
    cout << usuario.getCEP().GetCep() << endl;
    cout << usuario.getEndereco().GetEndereco() << endl;

    cout << " --------- Conta ----------" << endl;

    return 0;
}







