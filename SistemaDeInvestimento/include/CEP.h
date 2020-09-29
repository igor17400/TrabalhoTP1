#ifndef CEP_H
#define CEP_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para armazenar CEP e assim modularizar o nosso código seguindo padrão de OOP.

class CEP
{
    public:
        ///
        CEP(string cep="1000000");

        /// Método criado com o objetivo de atribuir o valor fornecido de CEP ao atributo cep do objeto.
        ///@param string que representa o cep inserido.
        ///@throw cep inválido
        /// O método define uma exceção, pois caso o valor de cep fornecido não seja válido é necessário
        ///     retornar uma exceção que demonstre que a variável inserida deve ser alterada.
        void SetCep(string) throw (invalid_argument);

        ///@return retorna o valor atribuido de cep, sem nenhuma verificação.
        string GetCep();

        ///Tem por objetivo imprimir, caso seja de interesse do usário, o valor atribuido ao atributo cep.
        void Print() const;

    private:
        string cep;
        void ValidarCep(string) throw (invalid_argument);
};

#endif // CEP_H
