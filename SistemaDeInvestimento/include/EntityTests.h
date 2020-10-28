#ifndef ENTITYTESTS_H
#define ENTITYTESTS_H

#include "Usuario.h"
#include "Conta.h"
#include "Aplicacao.h"
#include "Produto.h"

// ------- Classe TesteUsuario ---------
//! Classe criada para teste da Entidade Usuario.h
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
//! Classe criada para teste da Entidade Conta.h
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


// ------- Classe TesteAplicacao ---------
//! Classe criada para teste da Entidade Aplicacao.h
class EntityTestAplicacao {

    public:
        // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    private:
        const string VALOR_CODIGO_APLICACAO = "12345";
        const static int VALOR_APLICACAO = 500000;
        const string VALOR_DATA = "01/01/2020";

        //Refer�ncia ao objeto a ser testado
        Aplicacao *entidade;

        //Estado de teste
        int estado;

        //Declara��o de m�todos
        void setUp();
        void tearDown();

        //� preciso testar o cen�rio para cada atributo presente na classe
        //      por isso dentro do m�todo testarCenario estar� presente
        //      todos os tester por atributo
        void testarCenarioCodigoAplicacao();
        void testarCenarioValorAplicacao();
        void testarCenarioData();

};


// ------- Classe TesteProduto ---------
//! Classe criada para teste da Entidade Produto.h
class EntityTestProduto {

    public:
        // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    private:
        const string VALOR_CODIGO_PRODUTO = "123";
        const string VALOR_CLASSE = "CDB";
        const string VALOR_EMISSOR = "Itau Personalite";
        const static int VALOR_PRAZO = 12;
        const string VALOR_VENCIMENTO = "01/10/2020";
        const static int VALOR_TAXA = 150;
        const string VALOR_HORARIO = "15:30";
        const static int VALOR_MINIMO = 1000;

        //Refer�ncia ao objeto a ser testado
        Produto *entidade;

        //Estado de teste
        int estado;

        //Declara��o de m�todos
        void setUp();
        void tearDown();

        //� preciso testar o cen�rio para cada atributo presente na classe
        //      por isso dentro do m�todo testarCenario estar� presente
        //      todos os tester por atributo
        void testarCenarioCodigoProduto();
        void testarCenarioClasse();
        void testarCenarioEmissor();
        void testarCenarioPrazo();
        void testarCenarioVencimento();
        void testarCenarioTaxa();
        void testarCenarioHorario();
        void testarCenarioValorMinimo();

};

#endif // ENTITYTESTS_H
