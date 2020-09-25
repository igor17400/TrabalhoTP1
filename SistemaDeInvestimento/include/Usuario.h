#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
using namespace std;


class Usuario
{
    public:
        Usuario(string nome, string cpf, string senha, string endereco, string cep);

        void SetNome(string);
        void SetCpf(string);
        void SetSenha(string);
        void SetEndereco(string);
        void SetCep(string);

        string GetNome();
        string GetEndereco();
        string GetCep();
        string GetCpf();
        string GetSenha();

        bool CheckLogin(string nome, string password);

        void VerInfoUsuario();
        static void RequestLogin();

    protected:

    private:
        string nome;
        string endereco;
        string cep;
        string cpf;
        string senha;
};

#endif // USUARIO_H
