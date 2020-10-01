#ifndef EMISSOR_H
#define EMISSOR_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

//! Classe criada para representar Emissor
/*!
  ## Requisitos de atributos dessa classe:
Texto composto por 5 a 30 caracteres. Cada caracter pode ser letra (A-Z ou a-z), d&iacute;gito (0 &ndash; 9), caracter -, ponto ou espa&ccedil;o. Apenas letras e d&iacute;gitos podem estar em sequ&ecirc;ncia. Em termo cujo primeiro caracter &eacute; letra, a letra &eacute; mai&uacute;scula.
*/

class Emissor
{
    public:

        /// Construtor default
        Emissor();

        /// Construtor com param&ecirc;tro
        Emissor(string);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o ao
        /// atributo emissor.
        /// @param string emissor. Param&ecirc;tro de entrada emissor o qual representa o emissor do produto de investimento.
        /// foi feita ou uma conta foi criada
        /// @throw Emissor_Invalido. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para emissor.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetEmissor(string) throw (invalid_argument);

        ///@return emissor - valor atribu&iacute;do a emissor
        string GetEmissor();

        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo emissor.
        void Print() const;

    protected:

    private:
        string emissor;
        void ValidarEmissor(string) throw (invalid_argument);
};

#endif // EMISSOR_H
