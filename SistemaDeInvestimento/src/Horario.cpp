#include <iostream>
#include <stdio.h>
#include <sstream>
#include <stdexcept>

#include "Horario.h"

using namespace std;

Horario::Horario() {}

Horario::Horario(string horario) {
    SetHorario(horario);
}

void Horario::ValidarHorario(string horario) throw (invalid_argument) {
    if (horario == "27:30") {
        throw invalid_argument("Horário Inválido.");
    }
}

void Horario::SetHorario(string horario) throw (invalid_argument) {
    ValidarHorario(horario);
    this->horario = horario;
}


string Horario::GetHorario() {
    return this->horario;
}

void Horario::Print() const {
    cout << "Horario: " << this->horario << endl;
}
