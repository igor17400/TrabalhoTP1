#ifndef CEP_H
#define CEP_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class CEP
{
    public:
        CEP(string cep="000000");
        void ValidarCep(string) throw (invalid_argument);
        void SetCep(string) throw (invalid_argument);
        string GetCep();

        void Print() const;

    protected:

    private:
        string cep;
};

#endif // CEP_H
