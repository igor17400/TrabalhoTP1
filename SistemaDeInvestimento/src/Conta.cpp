#include <iostream>
#include <string>

#include "Conta.h"
#include "Usuario.h"


using namespace std;

Conta::Conta(const Usuario& usuario, const CodigoBanco& codigoBanco, const CodigoAgencia& codigoAgencia, const Numero& numero)
    :   usuario(usuario),
        codigoBanco(codigoBanco),
        codigoAgencia(codigoAgencia),
        numero(numero)
        {}

void Conta::Display(){
    codigoBanco.Print();
    codigoAgencia.Print();
    numero.Print();
}
