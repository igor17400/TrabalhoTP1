#include "ControladoraServico.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar métodos das controladoras de serviço.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Implementações dos métodos das classes controladoras da camada de serviço.


//--------------------------------------------------------------------------------------------
// Implementacoes dos metodos da classe controladora servico autenticacao.

bool CntrServicoAutenticacao::autenticar(CPF cpf, Senha senha){
    // ---------------------------------------------------------------------------------------
    // Instanciar container de usuarios.
    // ---------------------------------------------------------------------------------------
    ContainerUsuario *container;
    container = ContainerUsuario::getInstancia();

    // ---------------------------------------------------------------------------------------
    // Recuperar senha de usuario.
    // ---------------------------------------------------------------------------------------

    return container->autenticar(cpf, senha);
}


//--------------------------------------------------------------------------------------------
// Implementacoes dos metodos da classe controladora servico pessoal.
bool CntrServicoPessoal::cadastrarUsuario(Usuario usuario){

    // Instancia container de usuários.
    ContainerUsuario *container;

    container = ContainerUsuario::getInstancia();

    // Solicita cadastramento de usuario e retornar resultado da solicitacao de servico.
    return container->incluir(usuario);
}

Usuario CntrServicoPessoal::consultarUsuario(CPF cpf){

    ContainerUsuario *container;
    container = ContainerUsuario::getInstancia();

    // Solicita cadastramento de usuario e retornar resultado da solicitacao de servico.
    return container->consultar(cpf);
}


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o produtos financeiros.

bool CntrServicoProdutosFinanceiros::cadastrarConta(Conta conta){

    ContainerConta *container;
    container = ContainerConta::getInstanciaConta();


    // Solicita cadastramento de usuario e retornar resultado da solicitacao de servico.
    return container->incluir(conta);
}

Conta CntrServicoProdutosFinanceiros::consultarConta(CPF cpf){

    ContainerConta *container;
    container = ContainerConta::getInstanciaConta();


    // Solicita cadastramento de usuario e retornar resultado da solicitacao de servico.
    return container->consultar(cpf);
}



