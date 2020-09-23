#include <iostream>
#include "Usuario.h"

using namespace std;

int main()
{
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