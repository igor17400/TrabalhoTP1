#include "EntityTests.h"

using namespace std;

// ------- Teste de Nome -------
void EntityTestUsuario::setUp(){
    entidade = new Usuario();
    estado = SUCESSO;
}

void EntityTestUsuario::tearDown(){
    delete entidade;
}

void EntityTestUsuario::testarCenario(){
    Nome nome();
    Senha senha();
    CPF cpf();
    Endereco endereco();
    CEP cep();


}
