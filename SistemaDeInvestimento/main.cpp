#include <iostream>
#include <locale.h>
#include <windows.h>

#include "Usuario.h"
#include "Conta.h"

using namespace std;

int main()
{
    // Comando para corrigir erros de acentuação no cmd Windows
    setlocale (LC_ALL, "portuguese");


    // ------- Usuário ---------
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

    usuario1.VerInfoUsuario();

    // ------- CONTA ---------
    CodigoBanco codigoBanco("1234");
    CodigoAgencia codigoAgencia("123");
    Numero numero("123456-3");
    Conta conta(usuario1, codigoBanco, codigoAgencia, numero);

    conta.Display();


    return 0;
}
