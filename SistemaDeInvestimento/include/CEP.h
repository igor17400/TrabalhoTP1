#ifndef CEP_H
#define CEP_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para armazenar CEP e assim modularizar o nosso c�digo seguindo padr�o de OOP.

class CEP
{
    public:
        ///
        CEP(string cep="1000000");

        /// M�todo criado com o objetivo de atribuir o valor fornecido de CEP ao atributo cep do objeto.
        ///@param string que representa o cep inserido.
        ///@throw cep inv�lido
        /// O m�todo define uma exce��o, pois caso o valor de cep fornecido n�o seja v�lido � necess�rio
        ///     retornar uma exce��o que demonstre que a vari�vel inserida deve ser alterada.
        void SetCep(string) throw (invalid_argument);

        ///@return retorna o valor atribuido de cep, sem nenhuma verifica��o.
        string GetCep();

        ///Tem por objetivo imprimir, caso seja de interesse do us�rio, o valor atribuido ao atributo cep.
        void Print() const;

    private:
        string cep;
        void ValidarCep(string) throw (invalid_argument);
};

#endif // CEP_H
