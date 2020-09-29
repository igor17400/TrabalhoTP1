#ifndef TESTES_H
#define TESTES_H

#include "Nome.h"
#include "CPF.h"
#include "Endereco.h"
#include "CEP.h"
#include "Senha.h"
#include "CodigoAplicacao.h"
#include "ValorAplicacao.h"
#include "Data.h"
#include "CodigoBanco.h"
#include "CodigoAgencia.h"
#include "Numero.h"
#include "CodigoProduto.h"
#include "Classe.h"
#include "Emissor.h"
#include "Prazo.h"
#include "Taxa.h"
#include "Horario.h"
#include "ValorMinimo.h"

// ------- Classe TesteNome ---------
class TesteNome {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        Nome *nome;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "Igor Lima";
        const string VALOR_INVALIDO = "Igor Lima Rocha Azevedo Jo�o Pedro Zanatta";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};


// ------- Classe TesteEndereco ---------
class TesteEndereco {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        Endereco *endereco;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "Asa Sul BL K";
        const string VALOR_INVALIDO = "103 sul bloco j";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};


// ------- Classe TesteCEP ---------
class TesteCEP {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        CEP *cep;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "1000000";
        const string VALOR_INVALIDO = "0000000";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};


// ------- Classe TesteCPF ---------
class TesteCPF {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        CPF *cpf;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "065.891.841-94";
        const string VALOR_INVALIDO = "123.456.789.03";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteSenha ---------
class TesteSenha {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        Senha *senha;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "123456";
        const string VALOR_INVALIDO = "112345";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteCodigoAplicacao ---------
class TesteCodigoAplicacao {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        CodigoAplicacao *codigoAplicacao;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "12345";
        const string VALOR_INVALIDO = "00001";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteValorAplicacao ---------
class TesteValorAplicacao {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        ValorAplicacao *valorAplicacao;

        // Defini��es de constantes para evitar numeros m�gicos.
        const double VALOR_VALIDO   = 500000;
        const double VALOR_INVALIDO = -5.00;

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteData---------
class TesteData {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        Data *data;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "01/10/2020";
        const string VALOR_INVALIDO = "45/12/2020";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteCodigoBanco---------
class TesteCodigoBanco {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        CodigoBanco *codigoBanco;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "123";
        const string VALOR_INVALIDO = "018";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteCodigoAgencia---------
class TesteCodigoAgencia {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        CodigoAgencia *codigoAgencia;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "1234";
        const string VALOR_INVALIDO = "0000";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteNumero---------
class TesteNumero {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        Numero *numero;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "123456-7";
        const string VALOR_INVALIDO = "000000-0";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteCodigoProduto ---------
class TesteCodigoProduto {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        CodigoProduto *codigoProduto;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "123";
        const string VALOR_INVALIDO = "000";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteClasse ---------
class TesteClasse {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        Classe *classe;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "CDB";
        const string VALOR_INVALIDO = "CDX";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteEmissor ---------
class TesteEmissor {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        Emissor *emissor;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "Itau Personalite";
        const string VALOR_INVALIDO = "bank";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TestePrazo ---------
class TestePrazo {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        Prazo *prazo;

        // Defini��es de constantes para evitar numeros m�gicos.
        const static int VALOR_VALIDO   = 12;
        const static int VALOR_INVALIDO = 2;

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteTaxa ---------
class TesteTaxa {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        Taxa *taxa;

        // Defini��es de constantes para evitar numeros m�gicos.
        const double VALOR_VALIDO   = 150;
        const double VALOR_INVALIDO = 500;

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteHorario ---------
class TesteHorario {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        Horario *horario;

        // Defini��es de constantes para evitar numeros m�gicos.
        const string VALOR_VALIDO   = "15:30";
        const string VALOR_INVALIDO = "27:30";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};


// ------- Classe TesteValor ---------
class TesteValor {

    public:
       // Defini��es de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Refer�ncia para o objeto a ser testado.
        ValorMinimo *valorMinimo;

        // Defini��es de constantes para evitar numeros m�gicos.
        const double VALOR_VALIDO   = 1000.00;
        const double VALOR_INVALIDO = 250.00;

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

#endif // TESTES_H
