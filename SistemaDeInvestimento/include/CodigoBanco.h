#ifndef CODIGOBANCO_H
#define CODIGOBANCO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

//! Classe criada para representar o c&oacute;digo da banco fornecido.
/*!
  ## Requisitos de atributos dessa classe:
Formato XXX onde XXX &eacute; c&oacute;digo v&aacute;lido de banco e os c&oacute;digos aceitos devem corresponder
aos c&oacute;digos dos 5 maiores bancos brasileiros por ativos totais.
*/
class CodigoBanco
{
    public:
        /// Construtor default
        CodigoBanco();

        /// Construtor com param&ecirc;tro
        CodigoBanco(string);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo c&oacute;digo de banco.
        /// @param string codigo. Param&ecirc;tro de entrada c&oacute;digo, representa o c&oacute;digo do banco.
        /// @throw CodigoBanco_Invalido. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para c&oacute;digo de banco.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetCodigoBanco(string) throw (invalid_argument);

        ///@return CodigoBanco - valor atribuido a c&oacute;digo do banco
        string GetCodigoBanco();

        ///Tem por objetivo imprimir, caso seja de interesse do us&aacute;rio, o valor atribu&iacute;do ao
        /// atributo a c&oacute;digo de banco.
        void Print() const;

    protected:

    private:
        string codigo;
        void ValidarCodigoBanco(char codigo[]) throw (invalid_argument);
};

#endif // CODIGOBANCO_H
