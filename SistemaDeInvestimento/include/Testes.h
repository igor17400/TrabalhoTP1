#ifndef TESTES_H
#define TESTES_H

#include "Nome.h"
#include "CPF.h"
#include "Endereco.h"
#include "CEP.h"
#include "Senha.h"

class TesteNome {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        Nome *nome;

        // Definições de constantes para evitar numeros mágicos.
        const string VALOR_VALIDO   = "Igor Lima";
        const string VALOR_INVALIDO = "Igor Lima Roch Azevedo João Pedro Zanatta";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

class TesteCPF {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        CPF *cpf;

        // Definições de constantes para evitar numeros mágicos.
        const string VALOR_VALIDO   = "065.891.841-94";
        const string VALOR_INVALIDO = "123.456.789.03";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

class TesteEndereco {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        Endereco *endereco;

        // Definições de constantes para evitar numeros mágicos.
        const string VALOR_VALIDO   = "Asa Sul BL K";
        const string VALOR_INVALIDO = "103 sul bloco j";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

class TesteCEP {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        CEP *cep;

        // Definições de constantes para evitar numeros mágicos.
        const string VALOR_VALIDO   = "1000000";
        const string VALOR_INVALIDO = "0000000";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

class TesteSenha {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        Senha *senha;

        // Definições de constantes para evitar numeros mágicos.
        const string VALOR_VALIDO   = "123456";
        const string VALOR_INVALIDO = "112345";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

#endif // TESTES_H
