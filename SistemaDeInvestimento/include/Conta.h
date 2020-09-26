#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <string>

#include "Usuario.h"
#include "CodigoBanco.h"

using namespace std;

class Conta
{
    public:
        Conta(const Usuario &, const CodigoBanco &, string codigoAgencia, int numero);

        void setCodigoAgencia(string);
        void setNumero(int);

        string getCodigoAgencia();
        int getNumero();

    protected:

    private:
        const Usuario usuario;
        const CodigoBanco codigoBanco;
        string codigoAgencia;
        int numero;
};

#endif // CONTA_H
