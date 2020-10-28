#ifndef ENTITYTESTS_H
#define ENTITYTESTS_H

#include "Usuario.h"
#include "Conta.h"


// ------- Classe TesteUsuario ---------
class EntityTestUsuario {

    public:
        // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    private:
        const string VALOR_NOME = "Joao Pedro";
        const string VALOR_CPF = "065.891.841-94";
        const string VALOR_SENHA = "123456";
        const string VALOR_CEP = "70350760";
        const string VALOR_ENDERECO = "Condominio Estancia";

        //Refer�ncia ao objeto a ser testado
        Usuario *entidade;

        //Estado de teste
        int estado;

        //Declara��o de m�todos
        void setUp();
        void tearDown();

        //� preciso testar o cen�rio para cada atributo presente na classe
        //      por isso dentro do m�todo testarCenario estar� presente
        //      todos os tester por atributo
        void testarCenarioNome();
        void testarCenarioCPF();
        void testarCenarioSenha();
        void testarCenarioCEP();
        void testarCenarioEndereco();

};


// ------- Classe TesteConta ---------
class EntityTestConta {

    public:
        // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    private:
        const string VALOR_CODIGO_BANCO = "001";
        const string VALOR_CODIGO_AGENCIA = "1234";
        const string VALOR_NUMERO = "123456-3";

        //Refer�ncia ao objeto a ser testado
        Conta *entidade;

        //Estado de teste
        int estado;

        //Declara��o de m�todos
        void setUp();
        void tearDown();

        //� preciso testar o cen�rio para cada atributo presente na classe
        //      por isso dentro do m�todo testarCenario estar� presente
        //      todos os tester por atributo
        void testarCenarioCodigoBanco();
        void testarCenarioCodigoAgencia();
        void testarCenarioNumero();

};

#endif // ENTITYTESTS_H
