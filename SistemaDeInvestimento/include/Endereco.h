#ifndef ENDERECO_H
#define ENDERECO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

//! Classe criada para representar Endere&ccedil;o do usu&aacute;rio
/*!
  ## Requisitos de atributos dessa classe:
Texto composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z), d&iacute;gito (0 &ndash; 9), ponto ou espa&ccedil;o. Apenas letras e d&iacute;gitos podem estar em sequ&ecirc;ncia. Em termo cujo primeiro caracter &eacute; letra, a mesma &eacute; mai&uacute;scula.
*/


class Endereco
{
    public:
        /// Construtor default
        Endereco();

        /// Construtor com param&ecirc;tro
        Endereco(string);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o ao
        /// atributo endere&ccedil;o.
        /// @param string endere&ccedil;o. Param&ecirc;tro de entrada endere&ccedil;o o qual representa o endere&ccedil;o
        /// do usu&aacute;rio.
        /// foi feita ou uma conta foi criada
        /// @throw Emissor_Invalido. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para endere&ccedil;o.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetEndereco(string) throw (invalid_argument);

        ///@return endere&ccedil;o - valor atribu&iacute;do a endere&ccedil;o
        string GetEndereco();


        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo endere&ccedil;o.
        void Print() const;


    protected:

    private:
        string endereco;
        void ValidarEndereco(string) throw (invalid_argument);
};

#endif // ENDERECO_H
