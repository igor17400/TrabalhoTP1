#ifndef DATA_H
#define DATA_H


#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar Data
class Data
{
    public:
        /// Construtor default
        Data();

        /// Construtor com param&ecirc;tro
        Data(string);

        /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o ao
        /// atributo data.
        /// @param string data. Param&ecirc;tro de entrada data o qual representa a data em que uma opera&ccedil;&atilde;o
        /// foi feita ou uma conta foi criada
        /// @throw Data_Invalida. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
        /// vari&aacute;vel fornecida atende os requisitos definidos para data.
        /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
        void SetData(string);

        ///@return data - valor atribu&iacute;do a data
        string GetData();

        ///Tem por objetivo imprimir, caso seja de interesse do us&aacute;rio, o valor atribu&iacute;do ao
        /// atributo data.
        void Print() const;

    protected:

    private:
        string data;
        void VerificaData(string);
};

#endif // DATA_H
