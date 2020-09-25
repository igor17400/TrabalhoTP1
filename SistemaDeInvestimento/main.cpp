#include <iostream>
#include <locale.h>
#include <windows.h>

#include "Usuario.h"

using namespace std;

int main()
{
    // Comando para corrigir erros de acentuação no cmd Windows
    setlocale (LC_ALL, "portuguese");

    // Pré popular o 'banco' de usuários
    Usuario usuario1(
        "Igor",
        "Condominio estancia jardim botanico",
        "71680365",
        "06589184191",
        "12345"
    );

    usuario1.VerInfoUsuario();



    return 0;
}
