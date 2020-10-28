#ifndef APLICACAO_H
#define APLICACAO_H

#include <iostream>
#include <string>

#include "CodigoAplicacao.h"
#include "ValorAplicacao.h"
#include "Data.h"
#include "Conta.h"

using namespace std;


//! Classe criada para representar a <b>ENTIDADE</b> Aplica&ccedil;&atilde;o
/*!
  ## Descri&ccedil;&atilde;o
  Essa classe entidade &eacute; composta por outras classes Dom&iacute;nios.
  Por isso ser&aacute; expressado aqui todas as regras de cada dom&iacute;nio.

  ## Requisitos de atributos dessa classe:
  ### Classe CodigoAplicacao
  Formato XXXXX onde cada X &eacute; d&iacute;gito (0 &ndash; 9) e o c&oacute;digo n&atilde;o pode 00000.

  ### Classe ValorAplicacao
  Valor na faixa de 0 a 1.000.000,00 (reais).

  ### Classe Data
  Formato DD/MM/AAAA onde DD &eacute; n&uacute;mero de 1 e 31. MM &eacute; n&uacute;mero de 1 e 12. AAAA &eacute; n&uacute;mero de 2020 a 2099. O valor da data deve considerar a ocorr&ecirc;ncia de anos que sejam bissextos.

*/
class Aplicacao
{
    public:

        /// Construtor Default
        Aplicacao();

        /// Contrutor com param&ecirc;tros listados na especifica&ccedil;&atilde;o disponibilizada
        Aplicacao(const CodigoAplicacao &, const ValorAplicacao &, const Data &);

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio CodigoAplicacao.h
        void setCodigoAplicacao(const string);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio CodigoAplicacao.h
        CodigoAplicacao getCodigoAplicacao() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio ValorAplicacao.h
        void setValorAplicacao(const int);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio ValorAplicacao.h
        ValorAplicacao getValorAplicacao() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Data.h
        void setData(const string);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Data.h
        Data getData() const;

    private:
        CodigoAplicacao codigoAplicacao;
        ValorAplicacao valorAplicacao;
        Data dataObj;
};

#endif // APLICACAO_H




