#ifndef USUARIO_H
#define USUARIO_H

#include <stdexcept>
using namespace std;


class Usuario
{
    public:
        Usuario(string nome, string cpf, string senha, string endereco, string cep);

        void validarNome(string) throw (invalid_argument);
        void validarCpf(string) throw (invalid_argument);
        void validarSenha(string) throw (invalid_argument);
        void validarEndereco(string) throw (invalid_argument);
        void validarCep(string) throw (invalid_argument);

        void SetNome(string) throw (invalid_argument);
        void SetCpf(string) throw (invalid_argument);
        void SetSenha(string) throw (invalid_argument);
        void SetEndereco(string) throw (invalid_argument);
        void SetCep(string) throw (invalid_argument);

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

        bool checkCPF(const int * const cpf);
};

#endif // USUARIO_H
