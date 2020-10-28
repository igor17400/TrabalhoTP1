#ifndef ENTITYTESTS_H
#define ENTITYTESTS_H

#include "Usuario.h"


// ------- Classe TesteUsuario ---------
class EntityTestUsuario {

    public:
        // Defini��o de constantes para reportar resultado dos testes
        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int run();

    private:
        const static int VALOR_VALIDO = 20;

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
        void testarCenario();
};

#endif // ENTITYTESTS_H
