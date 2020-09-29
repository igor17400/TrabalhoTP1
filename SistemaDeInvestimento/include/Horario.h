#ifndef HORARIO_H
#define HORARIO_H


#include <stdio.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar hor&aacute;rio.
class Horario
{
    public:

        Horario(string horario="00:00");

        void SetHorario(string) throw (invalid_argument);

        string GetHorario();

        void Print() const;

    protected:

    private:
        string horario;
        void ValidarHorario(string) throw (invalid_argument);
};

#endif // HORARIO_H
