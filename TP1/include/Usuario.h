#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
using namespace std;


class Usuario
{
    public:
        Usuario();
        virtual ~Usuario();
        Usuario(string nome, string endereco, string cep, string cpf, string senha);
        void SetSenha(string);
        void VerInfoUsuario();

        string GetNome();
        string GetEndereco(); 
        string GetCep(); 
        string GetCpf(); 
        string GetSenha(); 

    protected:

    private:
        string nome;
        string endereco;
        string cep; 
        string cpf; 
        string senha;
};

#endif // USUARIO_H
