#ifndef VALORMINIMO_H
#define VALORMINIMO_H

#include <stdio.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar valor m&iacute;nimo aceito para aplica&ccedil;&atilde;o no produto de investimento.
class ValorMinimo
{
    public:
        /// Construtor default
        ValorMinimo();

        /// Construtor com param&ecirc;tro
        ValorMinimo(double);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo valor m&iacute;nimo.
        /// @param ValorMinimo. Param&ecirc;tro de entrada c&oacute;digo, representa
        /// valor m&iacute;nimo aceito para aplica&ccedil;&atilde;o no produto de investimento.
        /// @throw invalid_argument. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para valor  m&iacute;nimo.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetValorMinimo(double) throw (invalid_argument);

        ///@return ValorMinimo.
        double GetValorMinimo();

        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo valor m&iacute;nimo aceito para aplica&ccedil;&atilde;o no produto de investimento.
        void Print() const;

    private:
        double valor;
        void ValidarValorMinimo(double) throw (invalid_argument);
};
#endif // VALORMINIMO_H
