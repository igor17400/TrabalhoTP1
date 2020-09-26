#ifndef CPF_H
#define CPF_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class CPF
{
public:
    CPF(string cpf="000.000.000-00");

    void ValidarCpf(string) throw (invalid_argument);

    void SetCpf(string) throw (invalid_argument);
    string GetCpf();

    void Print() const;

protected:

private:
    string cpf;

    bool CheckCPF(const int* const cpf);
};

#endif // CPF_H
