#ifndef HORARIO_H
#define HORARIO_H


#include <stdio.h>
#include <stdexcept>

using namespace std;

//! Classe criada para representar hor&aacute;rio.
/*!
  ## Requisitos de atributos dessa classe:
Formato XY:ZW para representar hor&aacute;rio entre 13:00 e 17:00 horas.
*/

class Horario
{
    public:

        /// Construtor default
        Horario();

        /// Construtor com param&ecirc;tro
        Horario(string);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o para o
        /// atributo hor&aacute;rio.
        /// @param horario. Param&ecirc;tro de entrada c&oacute;digo, representa o hor&aacute;rio de escolha de um investimento.
        /// @throw invalid_argument. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para hor&aacute;rio.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetHorario(string) throw (invalid_argument);

        ///@return Horario - valor atribuido a hor&aacute;rio.
        string GetHorario();

        ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
        /// atributo hor&aacute;rio.
        void Print() const;

    protected:

    private:
        string horario;
        void ValidarHorario(string) throw (invalid_argument);
};

#endif // HORARIO_H
