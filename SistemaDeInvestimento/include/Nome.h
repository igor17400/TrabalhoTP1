#ifndef NOME_H
#define NOME_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar Nome do usu&aacute;rio.
class Nome
{
    public:
        /// Construtor default
        Nome();

        /// Construtor com param&ecirc;tro
        Nome(string);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo Nome.
        /// @param Nome. Param&ecirc;tro de entrada c&oacute;digo, representa o nome inserido pelo usu&aacute;rio.
        /// @throw invalid_argument. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para nome.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetNome(string) throw (invalid_argument);

        ///@return Nome - valor inserido pelo usu&aacute;rio.
        string GetNome();

        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo nome.
        void Print() const;

    protected:

    private:
        string nome;
        void ValidarNome(string) throw (invalid_argument);
};

#endif // NOME_H
