#ifndef EMISSOR_H
#define EMISSOR_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class Emissor
{
    public:
        Emissor(string emissor="000000");
        void ValidarEmissor(string) throw (invalid_argument);
        void SetEmissor(string) throw (invalid_argument);
        string GetEmissor();

        void Print() const;

    protected:

    private:
        string emissor;
};

#endif // EMISSOR_H
