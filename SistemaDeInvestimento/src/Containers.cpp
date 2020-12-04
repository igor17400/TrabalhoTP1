#include "Containers.h"



////// ------------------------- Usuario
ContainerUsuario* ContainerUsuario::instancia = nullptr;

ContainerUsuario* ContainerUsuario::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerUsuario();
    return instancia;
}

bool ContainerUsuario::incluir(Usuario usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCPF().GetCpf() == usuario.getCPF().GetCpf()){
            return false;
        }
    }
    // Inclui objeto.
    container.push_back(usuario);
    return true;
}


bool ContainerUsuario::remover(CPF cpf){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCPF().GetCpf() == cpf.GetCpf()){
            // Remove objeto localizado.
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerUsuario::autenticar(CPF cpf, Senha senha){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCPF().GetCpf() == cpf.GetCpf()){
            if (elemento->getSenha().GetSenha() == senha.GetSenha()){
                return true;
            }
        }
    }
    return false;
}

Usuario ContainerUsuario::consultar(CPF cpf){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCPF().GetCpf() == cpf.GetCpf()){
            cout << "Consultando..." << endl;
            Usuario usuario(elemento->getNome().GetNome(), elemento->getCPF().GetCpf(),
                            elemento->getSenha().GetSenha(), elemento->getEndereco().GetEndereco(),
                            elemento->getCEP().GetCep());
            return usuario;
        }
    }
}

bool ContainerUsuario::pesquisar(Usuario* usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCPF().GetCpf() == usuario->getCPF().GetCpf()){
            // Copia dados do objeto localizado.
            usuario->setEndereco(elemento->getEndereco().GetEndereco());
            usuario->setCEP(elemento->getCEP().GetCep());
            usuario->setSenha(elemento->getSenha().GetSenha());

            return true;
        }
    }
    return false;
}

bool ContainerUsuario::atualizar(Usuario usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCPF().GetCpf() == usuario.getCPF().GetCpf()){
            elemento->setEndereco(usuario.getEndereco().GetEndereco());
            elemento->setCEP(usuario.getCEP().GetCep());
            elemento->setSenha(usuario.getSenha().GetSenha());
            return true;
        }
    }
    return false;
}



////// ------------------------- Conta
ContainerConta* ContainerConta::instanciaConta = nullptr;

ContainerConta* ContainerConta::getInstanciaConta() {
    if (instanciaConta == nullptr)
        instanciaConta = new ContainerConta();
    return instanciaConta;
}

bool ContainerConta::incluir(Conta conta){
    for(list<Conta>::iterator elemento = containerConta.begin(); elemento != containerConta.end(); elemento++){
        if (elemento->getNumero().GetNumero() == conta.getNumero().GetNumero()){
            return false;
        }
    }
    // Inclui objeto.
    containerConta.push_back(conta);
    return true;
}


bool ContainerConta::remover(Numero numero){
    for(list<Conta>::iterator elemento = containerConta.begin(); elemento != containerConta.end(); elemento++){
        if (elemento->getNumero().GetNumero() == numero.GetNumero()){
            // Remove objeto localizado.
            containerConta.erase(elemento);
            return true;
        }
    }
    return false;
}


Conta ContainerConta::consultar(CPF cpf){
    for(list<Conta>::iterator elemento = containerConta.begin(); elemento != containerConta.end(); elemento++){
        if (elemento->getUsuarioCPF().GetCpf() == cpf.GetCpf()){
            cout << "Consultando..." << endl;
            Conta conta(elemento->getCodigoBanco(),
                         elemento->getCodigoAgencia(),
                         elemento->getNumero());

            return conta;
        }
    }
}


////// ------------------------- Produto de Investimento
ContainerProdutoInvestimento* ContainerProdutoInvestimento::instanciaProdutoInvestimento = nullptr;

ContainerProdutoInvestimento* ContainerProdutoInvestimento::getInstancia() {
    if (instanciaProdutoInvestimento == nullptr)
        instanciaProdutoInvestimento = new ContainerProdutoInvestimento();
    return instanciaProdutoInvestimento;
}

bool ContainerProdutoInvestimento::incluir(Produto produto){
    for(list<Produto>::iterator elemento = containerProdutoInvestimento.begin(); elemento != containerProdutoInvestimento.end(); elemento++){
        if (elemento->getCodigoProduto().GetCodigoProduto() == produto.getCodigoProduto().GetCodigoProduto()){
            return false;
        }
    }
    // Inclui objeto.
    containerProdutoInvestimento.push_back(produto);
    return true;
}


bool ContainerProdutoInvestimento::remover(CodigoProduto codigoProduto){
    for(list<Produto>::iterator elemento = containerProdutoInvestimento.begin(); elemento != containerProdutoInvestimento.end(); elemento++){
        if (elemento->getCodigoProduto().GetCodigoProduto() == codigoProduto.GetCodigoProduto()){
            // Remove objeto localizado.
            containerProdutoInvestimento.erase(elemento);
            return true;
        }
    }
    return false;
}



