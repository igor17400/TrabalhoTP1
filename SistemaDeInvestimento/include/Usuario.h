#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <stdexcept>

#include "Nome.h"
#include "CPF.h"
#include "Senha.h"
#include "Endereco.h"
#include "CEP.h"

using namespace std;


//! Classe criada para representar a entidade Usu&aacute;rio
/*!
  ## Descri&ccedil;&atilde;o
  Essa classe entidade &eacute; composta por outras classes Dom&iacute;nios.
  Por isso ser&aacute; expressado aqui todas as regras de cada dom&iacute;nio.
  ## Requisitos de atributos dessa classe:
  ### Classe Nome
  Texto composto por 5 a 30 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou espa&ccedil;o, h&aacute; pelo menos 5 letras, n&atilde;o h&aacute; espa&ccedil;os em sequ&ecirc;ncia, primeira letra de cada termo &eacute; letra mai&uacute;scula.

  ### Classe CPF
  Formato XXX.XXX.XXX-XX onde cada X &eacute; d&iacute;gito (0 &ndash; 9) e cada CPF inclui d&iacute;gitos verificadores calculados por meio de algor&iacute;tmo apropriado.

  ### Classe Senha
  Formato XXXXXX onde cada X &eacute; d&iacute;gito (0 &ndash; 9) e n&atilde;o h&aacute; d&iacute;gito repetido.

  ### Classe Endere&ccedil;o
  Texto composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z), d&iacute;gito (0 &ndash; 9), ponto ou espa&ccedil;o. Apenas letras e d&iacute;gitos podem estar em sequ&ecirc;ncia. Em termo cujo primeiro caracter &eacute; letra, a mesma &eacute; mai&uacute;scula.

  ### Classe CEP
  cep - Deve possuir o valor nas seguintes faixas: 1000000 a 5999999
  e 8000000 a 8499999 (S&atilde;o Paulo), 20000000 a 26600999 (Rio de Janeiro),
  70000000 a 70999999 (Bras&iacute;lia), 40000000 a 41999999 (Salvador) e 60000000 a 60999999 (Fortaleza).

*/
class Usuario {

public:

    /// Construtor Default
    Usuario();

    /// Contrutor com param&ecirc;tros listados na especifica&ccedil;&atilde;o disponibilizada
    Usuario(const Nome &, const CPF &, const Senha &, const Endereco &, const CEP &);


    /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Nome.h
    void setNome(const string nome);
    /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Nome.h
    Nome getNome() const;

    /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Senha.h
    void setSenha(const string senha);
    /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Senha.h
    Senha getSenha() const;

    /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio CPF.h
    void setCPF(const string cpf);
    /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio CPF.h
    CPF getCPF() const;

    /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio Endereco.h
    void setEndereco(const string endereco);
    /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio Endereco.h
    Endereco getEndereco() const;

    /// M&eacute;todo utilizado para atribuit valor ao atributo do tipo classe dom&iacute;nio CEP.h
    void setCEP(const string CEP);
    /// M&eacute;todo utilizado para obter valor atribu&iacute;do do tipo classe dom&iacute;nio CEP.h
    CEP getCEP() const;

    void VerInfoUsuario();
    static void RequestLogin();

protected:

private:
    Nome nome;
    CPF cpf;
    Endereco endereco;
    CEP cep;
    Senha senha;
};

#endif // USUARIO_H
