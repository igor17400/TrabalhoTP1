#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <string>
using namespace std;

class Conta
{
    public:
        Conta(string codigoBanco, string codigoAgencia, int numero);

        void setCodigoBanco(string);
        void setCodigoAgencia(string);
        void setNumero(int);

        string getCodigoBanco();
        string getCodigoAgencia();
        int getNumero();

    protected:

    private:
        string codigoBanco;
        string codigoAgencia;
        int numero;
};

#endif // CONTA_H
