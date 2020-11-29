#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED


#include "Usuario.h"
#include "Nome.h"
#include "CPF.h"
#include "Endereco.h"
#include "CEP.h"
#include "Senha.h"
#include "CodigoAplicacao.h"
#include "ValorAplicacao.h"
#include "Data.h"
#include "CodigoBanco.h"
#include "CodigoAgencia.h"
#include "Numero.h"
#include "CodigoProduto.h"
#include "Classe.h"
#include "Emissor.h"
#include "Prazo.h"
#include "Taxa.h"
#include "Horario.h"
#include "ValorMinimo.h"
#include "Conta.h"
#include "Produto.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Adequar as declarações das interfaces de acordo com as necessidades.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

// Forward declarations.

class IServicoAutenticacao;
class IServicoPessoal;
class IServicoProdutosFinanceiros;

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de apresentação.

class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(CPF*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoPessoal{
    public:
        virtual void executar(CPF) = 0;
        virtual void cadastrar() = 0;
        virtual void setCntrServicoPessoal(IServicoPessoal*) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        virtual ~IApresentacaoPessoal(){}
};

class IApresentacaoProdutosFinanceiros{
    public:
        virtual void executar() = 0;
        virtual void executar(CPF) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        virtual ~IApresentacaoProdutosFinanceiros(){}
};

//--------------------------------------------------------------------------------------------
// Declaracoes das interfaces da camada de servico.
class IServicoAutenticacao {
    public:
        virtual bool autenticar(CPF, Senha) = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoPessoal{
public:
        virtual bool cadastrarUsuario(Usuario) = 0;
        virtual ~IServicoPessoal(){}
};

class IServicoProdutosFinanceiros{
public:
        virtual bool cadastrarConta(Conta) = 0;
        virtual bool consultarConta(Conta*) = 0;
        virtual bool cadastrarProdutoInvestimento(Produto) = 0;
        virtual bool descadastrarProdutoInvestimento(CodigoProduto) = 0;
        virtual bool realizarAplicacao(CodigoAplicacao) = 0;
        virtual bool recuperarAplicacao(CodigoAplicacao*) = 0;                        // Adaptar aos requisitos.
        virtual ~IServicoProdutosFinanceiros(){}
};

#endif // INTERFACES_H_INCLUDED
