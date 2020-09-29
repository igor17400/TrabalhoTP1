#ifndef CODIGOAPLICACAO_H
#define CODIGOAPLICACAO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar o c&oacute;digo da aplica&ccedil;&atilde;o escolhida.
class CodigoAplicacao
{
    public:
        /// Construtor default
        CodigoAplicacao();

        /// Construtor com param&ecirc;tro
        CodigoAplicacao(string);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo c&oacute;digo de aplica&ccedil;&atilde;o.
        /// @param string codigo. Param&ecirc;tro de entrada c&oacute;digo, representa o c&oacute;digo da aplica&ccedil;&atilde;o.
        /// @throw CodigoProduto_Invalido. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para c&oacute;digo de aplica&ccedil;&atilde;o.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetCodigoAplicacao(string) throw (invalid_argument);

        ///@return CodigoProduto - valor atribuido a c&oacute;digo de aplica&ccedil;&atilde;o
        string GetCodigoAplicacao();

        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo a c&oacute;digo de aplica&ccedil;&atilde;o
        void Print() const;


    protected:

    private:
        string codigo;
        void ValidarCodigoAplicacao(string) throw (invalid_argument);
};

#endif // CODIGOAPLICACAO_H
