#ifndef TAXA_H
#define TAXA_H


#include <stdio.h>
#include <stdexcept>

using namespace std;

//! Classe criada para representar taxa de renumera&ccedil;&atilde;o do produto de investimento.
/*!
  ## Requisitos de atributos dessa classe:
Valor na faixa de 0 a 200 (% ao ano).
*/

class Taxa
{
    public:
        /// Construtor default
        Taxa();

        /// Construtor com param&ecirc;tro
        Taxa(double);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo taxa.
        /// @param taxa. Param&ecirc;tro de entrada c&oacute;digo, representa taxa de renumera&ccedil;&atilde;o do produto de investimento.
        /// @throw invalid_argument. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para taxa.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetTaxa(double) throw (invalid_argument);

        ///@return taxa - taxa de renumera&ccedil;&atilde;o do produto de investimento.
        double GetTaxa();

        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo taxa de renumera&ccedil;&atilde;.
        void Print() const;

    protected:

    private:
        double taxa;
        void ValidarTaxa(double) throw (invalid_argument);
};

#endif // TAXA_H
