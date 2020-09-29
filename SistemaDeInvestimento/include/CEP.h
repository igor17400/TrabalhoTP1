#ifndef CEP_H
#define CEP_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

//!  Classe criada para armazenar CEP.
/*!
  ## Requisitos de atributos dessa classe:
  cep - Deve possuir o valor nas seguintes faixas: 1000000 a 5999999
  e 8000000 a 8499999 (S&atilde;o Paulo), 20000000 a 26600999 (Rio de Janeiro),
  70000000 a 70999999 (Bras&iacute;lia), 40000000 a 41999999 (Salvador) e 60000000 a 60999999 (Fortaleza).
*/

class CEP
{
    public:
        /// Construtor default
        CEP();

        /// Construtor com param&ecirc;tro
        CEP(string);

        /// M&eacute;todo criado com o objetivo de atribuir o valor fornecido de CEP ao atributo cep do objeto.
        ///@param string que representa o cep inserido.
        ///@throw retorna cep inv&aacute;lido.\n
        /// O m&eacute;todo define uma exce&ccedil;&atilde;o, pois caso o valor de cep fornecido n&atilde;o seja v&aacute;lido &eacute; necess&aacute;rio
        ///     retornar uma exce&ccedil;&atilde;o que demonstre que a variável inserida deve ser alterada.
        void SetCep(string) throw (invalid_argument);

        ///@return cep. retorna o valor atribuido de cep.
        string GetCep();

        ///Tem por objetivo imprimir, caso seja de interesse do us	&aacute;rio, o valor atribu&iacute;do ao atributo cep.
        void Print() const;

    private:
        string cep;
        void ValidarCep(string) throw (invalid_argument);
};

#endif // CEP_H
