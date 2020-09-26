#ifndef VALORMINIMO_H
#define VALORMINIMO_H

#include <stdio.h>
#include <stdexcept>

using namespace std;

class ValorMinimo
{
    public:
        ValorMinimo(double valor=0.0);
        void ValidarValorMinimo(double) throw (invalid_argument);
        void SetValorMinimo(double) throw (invalid_argument);
        double GetValorMinimo();

        void Print() const;

    protected:

    private:
        double valor;
};
#endif // VALORMINIMO_H
