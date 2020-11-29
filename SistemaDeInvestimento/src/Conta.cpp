#include <iostream>
#include <string>

#include "Conta.h"
#include "Usuario.h"
#include "CPF.h"


using namespace std;

Conta::Conta() {}

Conta::Conta(const CodigoBanco& codigoBanco, const CodigoAgencia& codigoAgencia, const Numero& numero)
    :   codigoBanco(codigoBanco),
        codigoAgencia(codigoAgencia),
        numero(numero)
        {}


void Conta::setCodigoBanco(const string str){
    CodigoBanco codigoBanco(str);
    this->codigoBanco = codigoBanco;
}

CodigoBanco Conta::getCodigoBanco() const{
    return this->codigoBanco;
}

void Conta::setCodigoAgencia(const string str){
    CodigoAgencia codigoAgencia(str);
    this->codigoAgencia = codigoAgencia;
}

CodigoAgencia Conta::getCodigoAgencia() const{
    return this->codigoAgencia;
}

void Conta::setNumero(const string str){
    Numero numero(str);
    this->numero = numero;
}

Numero Conta::getNumero() const{
    return this->numero;
}

void Conta::setUsuario(const Usuario& usuario){
    this->usuario = usuario;
}

CPF Conta::getUsuarioCPF() const{
    return this->usuario.getCPF();
}

void Conta::Display(){
    codigoBanco.Print();
    codigoAgencia.Print();
    numero.Print();
}


