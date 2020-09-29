#ifndef CODIGOPRODUTO_H
#define CODIGOPRODUTO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar o c&oacute;digo de produto escolhido.
class CodigoProduto
{
    public:
        /// Construtor default
        CodigoProduto();

        /// Construtor com param&ecirc;tro
        CodigoProduto(string);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo c&oacute;digo de produto escolhido.
        /// @param string codigo. Param&ecirc;tro de entrada c&oacute;digo, representa o c&oacute;digo de produto escolhido.
        /// @throw CodigoBanco_Invalido. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para c&oacute;digo de produto escolhido.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetCodigoProduto(string) throw (invalid_argument);

        ///@return CodigoBanco - valor atribuido a c&oacute;digo de produto escolhido.
        string GetCodigoProduto();

        ///Tem por objetivo imprimir, caso seja de interesse do us&aacute;rio, o valor atribu&iacute;do ao
        /// atributo a c&oacute;digo de produto escolhido.
        void Print() const;

    private:
        string codigo;
        void ValidarCodigoProduto(char codigo[]) throw (invalid_argument);
};


#endif // CODIGOPRODUTO_H
