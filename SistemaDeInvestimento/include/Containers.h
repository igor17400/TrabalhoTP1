#ifndef CONTAINERS_H
#define CONTAINERS_H

#include "entidades.h"
#include "Usuario.h"
#include "Conta.h"
#include "Aplicacao.h"
#include "Produto.h"

#include <list>

using namespace std;

// Declaração de classe container de usuários.

// Implementação adota padrão de projeto Singleton.
class ContainerUsuario{
    private:
        list<Usuario> container;                        // Lista de usuarios.
        static ContainerUsuario *instancia;             // Ponteiro para instancia da classe.
        ContainerUsuario(){};                           // Construtor.
    public:
        static  ContainerUsuario* getInstancia();       // Metodo para instanciar a classe.
        bool incluir(Usuario);                          // Metodos responsaveis por prestacao de servico.
        bool autenticar(CPF, Senha);
        Usuario consultar(CPF);
        bool remover(CPF);
        bool pesquisar(Usuario*);
        bool atualizar(Usuario);
};

class ContainerConta {
    private:
        list<Conta> containerConta;
        static ContainerConta *instanciaConta;
        ContainerConta(){};
    public:
        static  ContainerConta* getInstanciaConta();
        bool incluir(Conta);
        Conta consultar(CPF);
        bool remover(Numero);
        bool pesquisar(Conta*);
        bool atualizar(Conta);
};

class ContainerProdutoInvestimento {
    private:
        list<Produto> containerProdutoInvestimento;
        static ContainerProdutoInvestimento *instanciaProdutoInvestimento;
        ContainerProdutoInvestimento(){};
    public:
        static  ContainerProdutoInvestimento* getInstancia();
        bool incluir(Produto);
        bool remover(CodigoProduto);
        bool pesquisar(Produto*);
        bool atualizar(Produto);
};

#endif // CONTAINERS_H
