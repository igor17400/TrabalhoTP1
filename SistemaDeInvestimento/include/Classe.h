#ifndef CLASSE_H
#define CLASSE_H


#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar tipo de classe de investimento.
class Classe
{
    public:
        /// Construtor default
        Classe();

        /// Construtor com param&ecirc;tro
        Classe(string);

        ///@param string que representa o classe inserida como par&acirc;metro.
        ///@throw invalid_argument. Retorna classe inv&aacute;lida.\n
        ///M&eacute;todo criado para atribuir valor ao atributo classe. Antes de tal atribui&ccedil;&atilde;o
        ///&eacute; feito uma verifica&ccedil;&atilde;o da vari&aacute;vel a ser inserida, para
        /// que seja determinado se a mesma segue os crit&eacute;rios de valida&ccedil;&atilde;o.
        /// Caso n&atilde;o siga, &eacute; necess&aacute;rio lan&ccedil;ar uma exce&ccedil;&atilde;o.
        void SetClasse(string) throw (invalid_argument);

        ///@return classe. Retorna o valor atribuido a classe.
        string GetClasse();

        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao atributo classe.
        void Print() const;

    private:
        string texto;
        void ValidarClasse(char text[]) throw (invalid_argument);
};


#endif // CLASSE_H
