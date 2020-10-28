#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <string>

#include "Usuario.h"
#include "CodigoBanco.h"
#include "CodigoAgencia.h"
#include "Numero.h"

using namespace std;

//! Classe criada para representar a entidade Conta
/*!
  ## Descri&ccedil;&atilde;o
  Essa classe entidade &eacute; composta por outras classes Dom&iacute;nios.
  Por isso ser&aacute; expressado aqui todas as regras de cada dom&iacute;nio.

  ## Requisitos de atributos dessa classe:
  ### Classe CodigoBanco
  Formato XXX onde XXX &eacute; c&oacute;digo v&aacute;lido de banco e os c&oacute;digos aceitos devem corresponder
aos c&oacute;digos dos 5 maiores bancos brasileiros por ativos totais.

  ### Classe CodigoAgencia
  Formato XXXX onde cada X &eacute; d&iacute;gito (0 &ndash; 9) e o c&oacute;digo n&atilde;o pode 0000.

  ### Classe Numero
  Formato XXXXXX-Y onde cada X &eacute; d&iacute;gito (0 &ndash; 9) e Y &eacute; d&iacute;gito verificador calculado por meio de algor&iacute;tmo apropriado.

*/
class Conta
{
    public:
        /// Construtor Default
        Conta();

        /// Contrutor com param&ecirc;tros listados na especifica&ccedil;&atilde;o disponibilizada
        Conta(const CodigoBanco &, const CodigoAgencia&, const Numero&);

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio CodigoBanco.h
        void setCodigoBanco(const string);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio CodigoBanco.h
        CodigoBanco getCodigoBanco() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio CodigoAgencia.h
        void setCodigoAgencia(const string);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio CodigoAgencia.h
        CodigoAgencia getCodigoAgencia() const;

        /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Numero.h
        void setNumero(const string);
        /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Numero.h
        Numero getNumero() const;

        void Display();

    protected:

    private:
        CodigoBanco codigoBanco;
        CodigoAgencia codigoAgencia;
        Numero numero;
};

#endif // CONTA_H
