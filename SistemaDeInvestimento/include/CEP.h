#ifndef CEP_H
#define CEP_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para armazenar CEP.
class CEP
{
    public:
        ///Construtor toma como valor padr&atilde;o 1000000, caso n&atilde;o seja fornecido uma entrada.
        CEP(string cep="1000000");

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
