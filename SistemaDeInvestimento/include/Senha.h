#ifndef SENHA_H
#define SENHA_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar senha inserida pelo usu&aacute;rio
class Senha
{
    public:
        /// Construtor default
        Senha();

        /// Construtor com param&ecirc;tro
        Senha(string);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo senha.
        /// @param senha. Param&ecirc;tro de entrada c&oacute;digo, representa senha inserida pelo usu&aacute;rio.
        /// @throw invalid_argument. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para senha.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetSenha(string) throw (invalid_argument);

        ///@return senha
        string GetSenha();


    protected:

    private:
        string senha;
        bool UniqueSenha(string);
        void ValidarSenha(string) throw (invalid_argument);
};

#endif // SENHA_H
