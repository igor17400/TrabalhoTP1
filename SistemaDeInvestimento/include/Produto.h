#ifndef PRODUTO_H
#define PRODUTO_H

#include "CodigoProduto.h"
#include "Classe.h"
#include "Emissor.h"
#include "Data.h"
#include "Taxa.h"
#include "Horario.h"
#include "ValorMinimo.h"
#include "Prazo.h"
#include "Numero.h"


//! Classe criada para representar a <b>ENTIDADE</b> Produto
/*!
  ## Descri&ccedil;&atilde;o
  Essa classe entidade &eacute; composta por outras classes Dom&iacute;nios.
  Por isso ser&aacute; expressado aqui todas as regras de cada dom&iacute;nio.

  ## Requisitos dos atributos presentes nessa classe:
  ### Classe CodigoProduto
  Formato XXX onde cada X &eacute; d&iacute;gito (0 &ndash; 9) e o c&oacute;digo n&atilde;o pode ser 000.

  ### Classe do tipo Classe
  Texto CDB, LCA, LCI, LF ou LC.

  ### Classe Emissor
  Formato XXXXXX onde cada X &eacute; d&iacute;gito (0 &ndash; 9) e n&atilde;o h&aacute; d&iacute;gito repetido.

  ### Classe Prazo
  Valor 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72 (meses).

  ### Classe Data
  Formato DD/MM/AAAA onde DD &eacute; n&uacute;mero de 1 e 31. MM &eacute; n&uacute;mero de 1 e 12. AAAA &eacute; n&uacute;mero de 2020 a 2099. O valor da data deve considerar a ocorr&ecirc;ncia de anos que sejam bissextos.

  ### Classe Taxa
  Valor na faixa de 0 a 200 (% ao ano).

  ### Classe Horario
  Formato XY:ZW para representar hor&aacute;rio entre 13:00 e 17:00 horas.

  ### Classe ValorMinimo
  Valor 1.000,00, 5.000,00, 10.000 ou 50.000,00 (reais).

*/
class Produto
{
    public:
        /// Construtor Default
        Produto();

        /// Contrutor com param&ecirc;tros listados na especifica&ccedil;&atilde;o disponibilizada
        Produto(const CodigoProduto&, const Classe&, const Emissor&,
                const Prazo&, const Data&, const Taxa&,
                const Horario&, const ValorMinimo&);

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio CodigoProduto.h
        void setCodigoProduto(const string);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio CodigoProduto.h
        CodigoProduto getCodigoProduto() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Classe.h
        void setClasse(const string);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Classe.h
        Classe getClasse() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Emissor.h
        void setEmissor(const string);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Emissor.h
        Emissor getEmissor() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Prazo.h
        void setPrazo(const int);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Prazo.h
        Prazo getPrazo() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Data.h
        void setVencimento(const string);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Data.h
        Data getVencimento() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Taxa.h
        void setTaxa(const int);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Taxa.h
        Taxa getTaxa() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Horario.h
        void setHorario(const string);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Horario.h
        Horario getHorario() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio ValorMinimo.h
        void setValorMinimo(const int);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio ValorMinimo.h
        ValorMinimo getValorMinimo() const;

        void setContaNumero(const Numero&);
        Numero getContaNumero() const;


    private:
        CodigoProduto codigoProduto;
        Classe classe;
        Emissor emissor;
        Prazo prazo;
        Data vencimento;
        Taxa taxa;
        Horario horario;
        ValorMinimo valorMinimo;
        Numero contaNumero;
};

#endif // PRODUTO_H
