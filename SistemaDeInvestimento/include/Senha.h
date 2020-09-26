#ifndef SENHA_H
#define SENHA_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class Senha
{
    public:
        Senha(string senha="000");
        void ValidarSenha(string) throw (invalid_argument);
        void SetSenha(string) throw (invalid_argument);
        string GetSenha();

        void Print() const;


    protected:

    private:
        string senha;
};

#endif // SENHA_H
