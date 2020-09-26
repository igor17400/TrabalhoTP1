#ifndef HORARIO_H
#define HORARIO_H


#include <stdio.h>
#include <stdexcept>

using namespace std;

class Horario
{
    public:
        Horario(string horario="00:00");
        void ValidarHorario(string) throw (invalid_argument);
        void SetHorario(string) throw (invalid_argument);
        string GetHorario();

        void Print() const;

    protected:

    private:
        string horario;
};

#endif // HORARIO_H
