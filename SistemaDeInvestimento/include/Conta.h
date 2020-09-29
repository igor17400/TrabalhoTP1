#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <string>

#include "Usuario.h"
#include "CodigoBanco.h"
#include "CodigoAgencia.h"
#include "Numero.h"

using namespace std;

/// Classe criada para representar o conta
class Conta
{
    public:
        Conta(const Usuario &, const CodigoBanco &, const CodigoAgencia&, const Numero&);
        void Display();

    protected:

    private:
        const Usuario usuario;
        const CodigoBanco codigoBanco;
        const CodigoAgencia codigoAgencia;
        const Numero numero;
};

#endif // CONTA_H
