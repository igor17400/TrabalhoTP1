#ifndef CLASSE_H
#define CLASSE_H


#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class Classe
{
    public:
        Classe(string texto="000000");
        void ValidarClasse(string) throw (invalid_argument);
        void SetClasse(string) throw (invalid_argument);
        string GetClasse();

        void Print() const;

    protected:

    private:
        string texto;
};


#endif // CLASSE_H
