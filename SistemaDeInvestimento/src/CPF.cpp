#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CPF.h"

using namespace std;

CPF::CPF(string cpf) {
    SetCpf(cpf);
}

void CPF::ValidarCpf(string cpf) throw (invalid_argument) {

    string resultCPF;
    int arrCPF[11];

    for (int loop = 0; loop < cpf.length(); ++loop) {
        switch (cpf[loop]) {
        case '-':
        case '.':
            break;
        default:
            resultCPF += static_cast<unsigned char>(tolower(cpf[loop]));
        }
    }

    for (int i = 0; i < resultCPF.length(); i++) {
        arrCPF[i] = int(resultCPF[i]) - '0';
    }

    if (!CheckCPF(arrCPF)) {
        throw invalid_argument("CPF inválido.");
    }
}

void CPF::SetCpf(string cpf) throw (invalid_argument) {
    ValidarCpf(cpf);
    this->cpf = cpf;
}

string CPF::GetCpf() {
    return this->cpf;
}

void CPF::Print() const {
    cout << "CPF: " << this->cpf << endl;
}

bool CPF::CheckCPF(const int* const cpf)
{
    int digito1,
        digito2,
        temp = 0;

    for (char i = 0; i < 9; i++)
        temp += (cpf[i] * (10 - i));

    temp %= 11;

    if (temp < 2)
        digito1 = 0;
    else
        digito1 = 11 - temp;

    temp = 0;
    for (char i = 0; i < 10; i++)
        temp += (cpf[i] * (11 - i));

    temp %= 11;

    if (temp < 2)
        digito2 = 0;
    else
        digito2 = 11 - temp;

    if (digito1 == cpf[9] && digito2 == cpf[10])
        return true;
    else
        return false;
}
