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

#endif // CONTAINERS_H
