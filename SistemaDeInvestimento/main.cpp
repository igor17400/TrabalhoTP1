#include <iostream>
#include <locale.h>
#include <windows.h>

#include "Usuario.h"

using namespace std;

int main()
{
    // Comando para corrigir erros de acentuação no cmd Windows
    setlocale (LC_ALL, "portuguese");

    Nome nome("Igor Lima Rocha Azevedo");
    CPF cpf("065.891.841-94");
    Senha senha("12345");
    Endereco endereco("Cond. E. Jardim Bot.");
    CEP cep("71680365");

    // Pré popular o 'banco' de usuários
    Usuario usuario1(
        nome,
        cpf,
        senha,
        endereco,
        cep
    );

    usuario1.VerInfoUsuario();



    return 0;
}
