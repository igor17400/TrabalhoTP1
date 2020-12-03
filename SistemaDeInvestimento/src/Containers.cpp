#include "Containers.h"

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


