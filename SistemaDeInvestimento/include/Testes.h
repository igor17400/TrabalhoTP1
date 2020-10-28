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
//! Classe criada para teste do Dom&iacute;nio Nome.h
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
        const string VALOR_INVALIDO = "Igor Lima Rocha Azevedo João Pedro Zanatta";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};


// ------- Classe TesteEndereco ---------
//! Classe criada para teste do Dom&iacute;nio Endereco.h
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


// ------- Classe TesteCEP ---------
//! Classe criada para teste do Dom&iacute;nio CEP.h
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


// ------- Classe TesteCPF ---------
//! Classe criada para teste do Dom&iacute;nio CPF.h
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
        const string VALOR_INVALIDO = "065.891.841-93";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteSenha ---------
//! Classe criada para teste do Dom&iacute;nio Senha.h
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

// ------- Classe TesteCodigoAplicacao ---------
//! Classe criada para teste do Dom&iacute;nio CodigoAplicacao.h
class TesteCodigoAplicacao {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        CodigoAplicacao *codigoAplicacao;

        // Definições de constantes para evitar numeros mágicos.
        const string VALOR_VALIDO   = "12345";
        const string VALOR_INVALIDO = "00000";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteValorAplicacao ---------
//! Classe criada para teste do Dom&iacute;nio ValorAplicacao.h
class TesteValorAplicacao {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        ValorAplicacao *valorAplicacao;

        // Definições de constantes para evitar numeros mágicos.
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
//! Classe criada para teste do Dom&iacute;nio Data.h
class TesteData {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        Data *data;

        // Definições de constantes para evitar numeros mágicos.
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
//! Classe criada para teste do Dom&iacute;nio CodigoBanco.h
class TesteCodigoBanco {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        CodigoBanco *codigoBanco;

        // Definições de constantes para evitar numeros mágicos.
        const string VALOR_VALIDO   = "001";
        const string VALOR_INVALIDO = "018";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteCodigoAgencia---------
//! Classe criada para teste do Dom&iacute;nio CodigoAgencia.h
class TesteCodigoAgencia {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        CodigoAgencia *codigoAgencia;

        // Definições de constantes para evitar numeros mágicos.
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
//! Classe criada para teste do Dom&iacute;nio Numero.h
class TesteNumero {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        Numero *numero;

        // Definições de constantes para evitar numeros mágicos.
        const string VALOR_VALIDO   = "123456-3";
        const string VALOR_INVALIDO = "123456-1";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

// ------- Classe TesteCodigoProduto ---------
//! Classe criada para teste do Dom&iacute;nio CodigoProduto.h
class TesteCodigoProduto {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        CodigoProduto *codigoProduto;

        // Definições de constantes para evitar numeros mágicos.
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
//! Classe criada para teste do Dom&iacute;nio Classe.h
class TesteClasse {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        Classe *classe;

        // Definições de constantes para evitar numeros mágicos.
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
//! Classe criada para teste do Dom&iacute;nio Emissor.h
class TesteEmissor {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        Emissor *emissor;

        // Definições de constantes para evitar numeros mágicos.
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
//! Classe criada para teste do Dom&iacute;nio Prazo.h
class TestePrazo {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        Prazo *prazo;

        // Definições de constantes para evitar numeros mágicos.
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
//! Classe criada para teste do Dom&iacute;nio Taxa.h
class TesteTaxa {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        Taxa *taxa;

        // Definições de constantes para evitar numeros mágicos.
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
//! Classe criada para teste do Dom&iacute;nio Horario.h
class TesteHorario {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        Horario *horario;

        // Definições de constantes para evitar numeros mágicos.
        const string VALOR_VALIDO   = "15:30";
        const string VALOR_INVALIDO = "17:30";

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};


// ------- Classe TesteValorMinimo ---------
//! Classe criada para teste do Dom&iacute;nio ValorMinimo.h
class TesteValorMinimo {

    public:
       // Definições de constantes para reportar resultado do teste.
        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();

    protected:

    private:
        // Referência para o objeto a ser testado.
        ValorMinimo *valorMinimo;

        // Definições de constantes para evitar numeros mágicos
        const double VALOR_VALIDO   = 1000;
        const double VALOR_INVALIDO = 250;

        // Estado do teste
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
};

#endif // TESTES_H
