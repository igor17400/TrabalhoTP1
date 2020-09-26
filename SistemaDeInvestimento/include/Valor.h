#ifndef VALOR_H
#define VALOR_H


#include <stdio.h>
#include <stdexcept>

using namespace std;

class Valor
{
    public:
        Horario(string horario="00:00");
        void ValidarHorario(double) throw (invalid_argument);
        void SetHorario(double) throw (invalid_argument);
        double GetHorario();

        void Print() const;

    protected:

    private:
        string horario;
};

#endif // VALOR_H
