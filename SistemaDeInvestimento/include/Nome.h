#ifndef NOME_H
#define NOME_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class Nome
{
    public:
        Nome(string nome="default");

        void ValidarNome(string) throw (invalid_argument);
        void SetNome(string) throw (invalid_argument);
        string GetNome();

        void Print() const;

    protected:

    private:
        string nome;
};

#endif // NOME_H
