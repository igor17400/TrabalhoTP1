#ifndef APLICACAO_H
#define APLICACAO_H

#include <iostream>
#include <string>
using namespace std;

class Aplicacao
{
    public:
        Aplicacao(string codigoAplicacao, double valorAplicacao);

        void setCodigoAplicacao(string codigoAplicacao);
        void setValorAplicacao(double valorAplicacao);
        void setData(string data);

    protected:

    private:
        string codigoAplicacao;
        double valorAplicacao;
        string data;
};

#endif // APLICACAO_H
