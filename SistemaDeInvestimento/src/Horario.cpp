#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Horario.h"

using namespace std;

Horario::Horario() {}

Horario::Horario(string horario) {
    SetHorario(horario);
}

void Horario::ValidarHorario(string horario) throw (invalid_argument) {

    int arr_horario[4];
    int erro=0;

    int n = horario.length();
    char char_array[n + 1];
    strcpy(char_array, horario.c_str());

    for(int i = 0; i < 5; i++){
        if(i != 2) {
            if(i > 2)
                arr_horario[i-1] = char_array[i]-48;
            else
                arr_horario[i] = char_array[i]-48;
        }
    }

    if(arr_horario[0]!=1){
        erro++;
    }

    if(arr_horario[1]>7 || arr_horario[1]<3) {
        erro++;
    }

    if(arr_horario[2]>5){
        erro++;
    }

    if(arr_horario[1]==7 && arr_horario[2]!=0) {
        erro++;
    }

    if(erro>0)
        throw invalid_argument("Horário Inválido.");
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
