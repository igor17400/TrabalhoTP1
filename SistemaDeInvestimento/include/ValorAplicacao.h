#ifndef VALORAPLICACAO_H
#define VALORAPLICACAO_H


#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

//! Classe criada para representar o valor da aplica&ccedil;&atilde;o escolhida.
/*!
  ## Requisitos de atributos dessa classe:
Valor na faixa de 0 a 1.000.000,00 (reais).
*/

class ValorAplicacao
{
    public:

        /// Construtor default
        ValorAplicacao();

        /// Construtor com param&ecirc;tro
        ValorAplicacao(double);


        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo valor da aplica&ccedil;&atilde;o.
        /// @param ValorAplicacao. Param&ecirc;tro de entrada c&oacute;digo, representa valor da aplica&ccedil;&atilde;o escolhida..
        /// @throw invalid_argument. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para valor da aplica&ccedil;&atilde;o.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetValorAplicacao(double) throw (invalid_argument);

        ///@return ValoAplicacao - valor da aplica&ccedil;&atilde;o inserida pelo usu&aacute;rio.
        double GetValorAplicacao();


        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo valor da aplica&ccedil;&atilde;o.
        void Print() const;

    private:
        double valor;
        void ValidarValorAplicacao(double) throw (invalid_argument);
};

#endif // VALORAPLICACAO_H
