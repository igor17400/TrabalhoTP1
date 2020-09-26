#include <iostream>
#include <string>

#include "Conta.h"
#include "Usuario.h"


using namespace std;

Conta::Conta(const Usuario& usuario, const CodigoBanco& codigoBanco, string codigoAgencia, int numero)
    :   usuario(usuario),
        codigoBanco(codigoBanco)

{
    setCodigoAgencia(codigoAgencia);
    setNumero(numero);
}


void Conta::setCodigoAgencia(string codigoAgencia) {
    this->codigoAgencia = codigoAgencia;
}

void Conta::setNumero(int numero) {
    this->numero = numero;
}

string Conta::getCodigoAgencia() {
    return this->codigoAgencia;
}

int Conta::getNumero() {
    return this->numero;
}
