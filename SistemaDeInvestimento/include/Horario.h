#ifndef HORARIO_H
#define HORARIO_H


#include <stdio.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar hor&aacute;rio.
class Horario
{
    public:

        /// Construtor, o qual toma como valor padr&atilde;o "00:00",
        /// caso n&atilde;o seja fornecido param&ecirc;tro de entrada
        Horario(string horario="00:00");

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
