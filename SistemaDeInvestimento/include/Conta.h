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
        Conta();
        Conta(const CodigoBanco &, const CodigoAgencia&, const Numero&);

        void setCodigoBanco(const string);
        CodigoBanco getCodigoBanco() const;

        void setCodigoAgencia(const string);
        CodigoAgencia getCodigoAgencia() const;

        void setNumero(const string);
        Numero getNumero() const;

        void Display();

    protected:

    private:
        CodigoBanco codigoBanco;
        CodigoAgencia codigoAgencia;
        Numero numero;
};

#endif // CONTA_H
