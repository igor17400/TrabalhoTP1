#ifndef ENDERECO_H
#define ENDERECO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class Endereco
{
    public:
        Endereco(string endereco="default");

        void ValidarEndereco(string) throw (invalid_argument);
        void SetEndereco(string) throw (invalid_argument);
        string GetEndereco();

        void Print() const;


    protected:

    private:
        string endereco;
};

#endif // ENDERECO_H
