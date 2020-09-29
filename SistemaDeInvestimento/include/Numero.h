#ifndef NUMERO_H
#define NUMERO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar n&uacute;mero da conta.
class Numero
{
    public:

        /// Construtor, o qual toma como valor padr&atilde;o "00000",
        /// caso n&atilde;o seja fornecido param&ecirc;tro de entrada
        Numero(string numero="000000-1");

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo n&uacute;mero.
        /// @param numero. Param&ecirc;tro de entrada c&oacute;digo, representa n&uacute;mero da conta inserido pelo usu&aacute;rio.
        /// @throw invalid_argument. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para n&uacute;mero da conta.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetNumero(string) throw (invalid_argument);

        ///@return n&uacute;mero - valor inserido pelo usu&aacute;rio que representa seu n&uacute;mero de conta.
        string GetNumero();

        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo n&uacute;mero da conta.
        void Print() const;

    protected:

    private:
        string numero;
        void ValidarNumero(string) throw (invalid_argument);
};

#endif // NUMERO_H
