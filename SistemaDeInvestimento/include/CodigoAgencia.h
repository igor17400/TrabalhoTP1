#ifndef CODIGOAGENCIA_H
#define CODIGOAGENCIA_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

//! Classe criada para representar c&oacute;digo de ag&ecirc;ncia.
/*!
## Requisitos de atributos dessa classe:
Formato XXXX onde cada X &eacute; d&iacute;gito (0 &ndash; 9) e o c&oacute;digo n&atilde;o pode 0000.
*/

class CodigoAgencia
{
    public:
        /// Construtor default
        CodigoAgencia();

        /// Construtor com param&ecirc;tro
        CodigoAgencia(string);

        ///@param string que representa o c&oacute;digo de ag&ecirc;ncia inserido como par&acirc;metro.
        ///@throw CodigoAgencia. lan&ccedil;a excess&atilde;o para c&oacute;digo de ag&ecirc;ncia inv&aacute;lido \n
        ///M&eacute;todo criado para atribuir valor ao atributo c&oacute;digo de ag&ecirc;ncia.
        /// Antes de tal atribui&ccedil;&atilde;o
        ///&eacute; feito uma verifica&ccedil;&atilde;o da vari&aacute;vel a ser inserida, para
        /// que seja determinado se a mesma segue os crit&eacute;rios de valida&ccedil;&atilde;o.
        /// Caso n&atilde;o siga, &eacute; necess&aacute;rio lan&ccedil;ar uma exce&ccedil;&atilde;o.
        void SetCodigoAgencia(string) throw (invalid_argument);

        ///@return CodigoAgencia - valor atribuido a c&oacute;digo de ag&ecirc;ncia.
        string GetCodigoAgencia();

        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo a c&oacute;digo de ag&ecirc;ncia.
        void Print() const;

    private:
        string codigo;
        void ValidarCodigoAgencia(char codigo[]) throw (invalid_argument);
};

#endif // CODIGOAGENCIA_H
