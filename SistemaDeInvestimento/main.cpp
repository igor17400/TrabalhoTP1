#include <iostream>
#include <locale.h>
#include <windows.h>

#include "Usuario.h"
#include "Conta.h"
#include "Aplicacao.h"
#include "Produto.h"

using namespace std;

int main()
{
    // Comando para corrigir erros de acentuação no cmd Windows
    setlocale (LC_ALL, "portuguese");


    // ------- Cadastrar Usuário ---------
    Nome nome("Igor Lima Rocha Azevedo");
    CPF cpf("065.891.841-94");
    Senha senha("12345");
    Endereco endereco("Cond. E. Jardim Bot.");
    CEP cep("71680365");

    Usuario usuario1(
        nome,
        cpf,
        senha,
        endereco,
        cep
    );


    // ------- Cadastrar Conta ---------
    CodigoBanco codigoBanco("1234");
    CodigoAgencia codigoAgencia("123");
    Numero numero("123456-3");
    Conta conta(usuario1, codigoBanco, codigoAgencia, numero);

    // ------- Cadastrar Aplicação ------------
    CodigoAplicacao codigoAplicacao("12345");
    ValorAplicacao valorAplicacao(1500.00);
    Data dataObj("26/09/2020");
    Aplicacao aplicacao1(conta, codigoAplicacao, valorAplicacao, dataObj);

    // ------- Cadastrar Produto ------------
    CodigoProduto codigoProduto("12345");
    Classe classe("12345");
    Emissor emissor("Emissor XYZ");
    Prazo prazo(12);
    Data vecimento("26/09/2021");
    Taxa taxa(5.00);
    Horario horario("15:30");
    ValorMinimo valorMinimo(50.00);
    Produto produto(codigoProduto, classe, emissor, prazo, vecimento, taxa, horario, valorMinimo);


    return 0;
}
