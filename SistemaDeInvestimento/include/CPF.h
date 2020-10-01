#ifndef CPF_H
#define CPF_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

//! Classe criada para representar CPF
/*!
  ## Requisitos de atributos dessa classe:
Formato XXX.XXX.XXX-XX onde cada X &eacute; d&iacute;gito (0 &ndash; 9) e cada CPF inclui d&iacute;gitos verificadores calculados por meio de algor&iacute;tmo apropriado.
*/

class CPF
{
public:

    /// Construtor default
    CPF();

    /// Construtor com param&ecirc;tro
    CPF(string);

    /// M&eacute;todo respons&aacute;vel pela atribui&ccedil;&atilde;o ao
    /// atributo cpf.
    /// @param string cpf. Param&ecirc;tro de entrada cpf o qual representa o cpf fornecido pelo usu&aacute;rio.
    /// @throw CPF_Invalido. &Eacute; implementado um m&eacute;todo de verifica&ccedil;&atilde;o para avaliar se a
    /// vari&aacute;vel fornecida atende os requisitos definidos para cpf.
    /// Caso n&atilde;o seja atendido, &eacute; lan&ccedil;ado uma exce&ccedil;&atilde;o.
    void SetCpf(string) throw (invalid_argument);

    ///@return Cpf - valor atribu&iacute;do a cpf
    string GetCpf();

    ///Tem por objetivo imprimir, caso seja de interesse do usu&aacute;rio, o valor atribu&iacute;do ao
    /// atributo cpf.
    void Print() const;

protected:

private:
    string cpf;
    void ValidarCpf(string) throw (invalid_argument);
    bool CheckCPF(const int* const cpf);
};

#endif // CPF_H
