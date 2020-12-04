#ifndef CONTROLADORASERVICO_H
#define CONTROLADORASERVICO_H


#include "interfaces.h"
#include "containers.h"
#include "Usuario.h"
#include "Conta.h"
#include "Aplicacao.h"
#include "Produto.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar as controladoras de servi�o.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Classes controladoras da camada de servi�os.

//--------------------------------------------------------------------------------------------
// Classe controladora de servi�o autentica��o.

class CntrServicoAutenticacao:public IServicoAutenticacao{
    public:
        bool autenticar(CPF, Senha);
};

//--------------------------------------------------------------------------------------------
// Classe controladora de servi�o pessoal.

class CntrServicoPessoal:public IServicoPessoal{
    public:
        bool cadastrarUsuario(Usuario);
        Usuario consultarUsuario(CPF);
};

//--------------------------------------------------------------------------------------------
// Classe controladora de servi�o produtos financeiros.

class CntrServicoProdutosFinanceiros:public IServicoProdutosFinanceiros{
    public:
        bool cadastrarConta(Conta);
        Conta consultarConta(CPF cpf);
        bool cadastrarProdutoInvestimento(Produto);
        bool descadastrarProdutoInvestimento(CodigoProduto);

};

#endif // CONTROLADORASERVICO_H
