#ifndef PRAZO_H
#define PRAZO_H

#include <stdio.h>
#include <stdexcept>

using namespace std;

class Prazo
{
    public:
        Prazo(int prazo=0);
        void ValidarPrazo(int) throw (invalid_argument);
        void SetPrazo(int) throw (invalid_argument);
        int GetPrazo();

        void Print() const;

    protected:

    private:
        int prazo;
};

#endif // PRAZO_H
