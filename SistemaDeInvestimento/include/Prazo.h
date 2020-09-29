#ifndef PRAZO_H
#define PRAZO_H

#include <stdio.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar prazo de aplica&ccedil;&atilde;o em meses.
class Prazo
{
    public:
        /// Construtor default
        Prazo();

        /// Construtor com param&ecirc;tro
        Prazo(int);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo prazo.
        /// @param prazo. Param&ecirc;tro de entrada c&oacute;digo, representa prazo de aplica&ccedil;&atilde;o em meses.
        /// @throw invalid_argument. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para prazo de aplica&ccedil;&atilde;o em meses.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetPrazo(int) throw (invalid_argument);

        ///@return prazo - prazo de aplica&ccedil;&atilde;o em meses.
        int GetPrazo();

        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo prazo.
        void Print() const;

    protected:

    private:
        int prazo;
        void ValidarPrazo(int) throw (invalid_argument);
};

#endif // PRAZO_H
