#ifndef ENTITYTESTS_H
#define ENTITYTESTS_H

#include "Usuario.h"


// ------- Classe TesteUsuario ---------
class EntityTestUsuario {

    public:
        // Definição de constantes para reportar resultado dos testes
        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int run();

    private:
        const static int VALOR_VALIDO = 20;

        //Referência ao objeto a ser testado
        Usuario *entidade;

        //Estado de teste
        int estado;

        //Declaração de métodos
        void setUp();
        void tearDown();

        //É preciso testar o cenário para cada atributo presente na classe
        //      por isso dentro do método testarCenario estará presente
        //      todos os tester por atributo
        void testarCenario();
};

#endif // ENTITYTESTS_H
