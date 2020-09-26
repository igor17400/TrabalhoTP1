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


class Usuario
{
public:
    Usuario(const Nome& nome, const CPF& cpf, const Senha& senha, const Endereco& endereco, const CEP& cep);

    void VerInfoUsuario();
    static void RequestLogin();

protected:

private:
    const CPF cpf;
    const Nome nome;
    const Endereco endereco;
    const CEP cep;
    const Senha senha;
};

#endif // USUARIO_H
