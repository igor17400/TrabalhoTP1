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
    Usuario();
    Usuario(const Nome &, const CPF &, const Senha &, const Endereco &, const CEP &);

    void setNome(const string nome);
    Nome getNome() const;

    void setSenha(const string senha);
    Senha getSenha() const;

    void setCPF(const string cpf);
    CPF getCPF() const;

    void setEndereco(const string endereco);
    Endereco getEndereco() const;

    void setCEP(const string CEP);
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
