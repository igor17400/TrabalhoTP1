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
        /// Construtor, o qual toma como valor padr&atilde;o "111111",
        /// caso n&atilde;o seja fornecido param&ecirc;tro de entrada.
        /// implementa&ccedil;&atilde;o mudar&aacute; com o incremento do projeto.
        /// O valor default atribu&iacute;do &eacute; inv&aacute;lido para as regras
        /// de veifica&ccedil;ao. Consequentemente, se n&atilde;o for atribu&iacute;do
        /// nenhuma senha o c&oacute;digo lan&ccedil;ar&aacute; uma exce&ccedil;&atilde;o.
        Senha(string senha="111111");

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
