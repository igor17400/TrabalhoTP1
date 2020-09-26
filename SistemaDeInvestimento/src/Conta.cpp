#include "Conta.h"
#include <iostream>
#include <string>
using namespace std;

Conta::Conta(string codigoBanco, string codigoAgencia, int numero) {
    setCodigoBanco(codigoBanco);
    setCodigoAgencia(codigoAgencia);
    setNumero(numero);
}

void Conta::setCodigoBanco(string codigoBanco) {
    this->codigoBanco = codigoBanco;
}

void Conta::setCodigoAgencia(string codigoAgencia) {
    this->codigoAgencia = codigoAgencia;
}

void Conta::setNumero(int numero) {
    this->numero = numero;
}

string Conta::getCodigoBanco() {
    return this->codigoBanco;
}

string Conta::getCodigoAgencia() {
    return this->codigoAgencia;
}

int Conta::getNumero() {
    return this->numero;
}
