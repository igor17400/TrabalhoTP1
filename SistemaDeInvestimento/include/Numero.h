#ifndef NUMERO_H
#define NUMERO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class Numero
{
    public:
        Numero(string numero="00000");

        void ValidarNumero(string) throw (invalid_argument);
        void SetNumero(string) throw (invalid_argument);
        string GetNumero();

        void Print() const;

    protected:

    private:
        string numero;
};

#endif // NUMERO_H
