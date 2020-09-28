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
    TesteCPF testeCPF;
    TesteEndereco testeEndereco;
    TesteCEP testeCEP;
    TesteSenha testeSenha;

    switch(testeNome.run()){
        case TesteNome::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteNome::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeCPF.run()){
        case TesteCPF::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteCPF::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeEndereco.run()){
        case TesteEndereco::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteEndereco::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(testeSenha.run()){
        case TesteSenha::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TesteSenha::FALHA  : cout << "FALHA\n";
                                break;
    }

    return 0;
}
