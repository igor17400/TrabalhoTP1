#include "CntrApresentacaoControle.h"
#include <windows.h>
using namespace std;

void CntrApresentacaoControle::executar(){

    // Mensagens a serem apresentadas na tela inicial.
    char texto1[] = "Selecione um dos servicos : ";
    char texto2[] = "1 - Acessar sistema.";
    char texto3[] = "2 - Cadastrar usuario.";
    char texto4[] = "3 - Acessar dados sobre produtos financeiros.";
    char texto5[] = "4 - Encerrar execucao do sistema.";

    // Mensagens a serem apresentadas na tela de seleção do serviço.
    char texto6[] = "Selecione um dos servicos : ";
    char texto7[] = "1 - Selecionar servicos de pessoal.";
    char texto8[] = "2 - Selecionar servicos relacionados a produtos financeiros.";
    char texto9[] = "3 - Encerrar sessao.";

    char texto10[]="Falha na autenticacao. Digite algo para continuar.";                        // Mensagem a ser apresentada.

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de laço.

    while(apresentar){

        // Apresenta tela inicial.
        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.
        cout << texto5 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.

        switch(campo){
            case 1: if(cntrApresentacaoAutenticacao->autenticar(&cpf)){                         // Solicita autenticação.
                        bool apresentar = true;                                                 // Controle de laço.
                        while(apresentar){

                            // Apresenta tela de selecao de servico.

                            //CLR_SCR;                                                            // Limpa janela.

                            cout << texto6 << endl;                                             // Imprime nome do campo.
                            cout << texto7 << endl;                                             // Imprime nome do campo.
                            cout << texto8 << endl;                                             // Imprime nome do campo.
                            cout << texto9 << endl;                                             // Imprime nome do campo.

                            campo = getch() - 48;                                               // Leitura do campo de entrada e conversão de ASCII.

                            switch(campo){
                                case 1: cntrApresentacaoPessoal->executar(cpf);                 // Solicita servi�o de pessoal.
                                        break;
                                case 2: cntrApresentacaoProdutosFinanceiros->executar(cpf);     // Solicita servi�o de produto financeiro.
                                        break;
                                case 3: apresentar = false;
                                        break;
                            }
                        }
                    }
                    else {
                         CLR_SCR;                                                                // Limpa janela.
                        cout << texto10 << endl;                                                // Imprime mensagem.
                        getch();                                                                // Leitura de caracter digitado.
                    }
                    break;
            case 2: cntrApresentacaoPessoal->cadastrar();
                    break;
            case 3: cntrApresentacaoProdutosFinanceiros->executar();
                    break;
            case 4: apresentar = false;
                    break;
        }
    }
    return;
}


//--------------------------------------------------------------------------------------------
// Implementações dos métodos da classe controladora apresentação autenticação.

bool CntrApresentacaoAutenticacao::autenticar(CPF *cpf){

    // Mensagens a serem apresentadas na tela de autentica��o.

    char texto1[]="Digite o CPF  : ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Digite algo.";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    Senha senha;                                                                                // Instancia a classe Senha.

    while(true){

        // Apresenta tela de autentica��o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << " ";                                                                  // Imprime nome do campo.
        cin >> campo1;                                                                          // Le valor do campo.
        cout << texto2 << " ";                                                                  // Imprime nome do campo.
        cin >> campo2;                                                                          // Le valor do campo.

        try{
            cpf->SetCpf(string(campo1));                                                      // Atribui valor ao CPF.
            senha.SetSenha(string(campo2));
            break;                                                                              // Abandona la�o em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exce��o devido a formato incorreto.
            CLR_SCR;                                                                            // Limpa janela.
            cout << texto3 << endl;                                                             // Informa formato incorreto.
            getch();                                                                            // L� caracter digitado.
        }
    }

    return (cntr->autenticar(*cpf, senha));                                                     // Solicita servi�o de autentica��o.
}



//--------------------------------------------------------------------------------------------
// Implementações dos métodos da classe controladora apresentacao pessoal.
void CntrApresentacaoPessoal::executar(CPF cpf){

    // Mensagens a serem apresentadas na tela de seleção de serviço.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar dados pessoais.";
    char texto3[]="2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de laço.

    while(apresentar){

        // Apresenta tela de selação de serviço.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversao de ASCII.

        switch(campo){
            case 1: consultarDadosPessoais(cpf);
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------
void CntrApresentacaoPessoal::cadastrar(){

    // Mensagens a serem apresentadas na tela de cadastramento.
    char texto_intro[]     = "Preencha os seguintes campos: ";
    char texto_nome[]      = "Nome            :";
    char texto_endereco[]  = "Endereco        :";
    char texto_cep[]       = "CEP             :";
    char texto_cpf[]       = "CPF             :";
    char texto_senha[]     = "Senha           :";
    char texto_conta[]     = "Numero de conta :";
    char texto_agencia[]   = "Agencia         :";
    char texto_banco[]     = "Banco           :";
    char texto_incorreto[] = "Dados em formato incorreto. Digite algo.";
    char texto_sucesso[]   = "Sucesso no cadastramento. Digite algo.";
    char texto_falha[]     = "Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];                            // Cria campos para entrada dos dados.
    char campo6[80], campo7[80], campo8[80];                                                    // Cria campos para entrada dos dados.
    // Instancia os dominios.

    Nome nome;
    Endereco endereco;
    CEP cep;
    CPF cpf;
    Senha senha;
    Numero numero;
    CodigoAgencia agencia;
    CodigoBanco banco;

    // Apresenta tela de cadastramento.
    CLR_SCR;                                                                                   // Limpa janela.

    cout << texto_intro << endl;                                                               // Imprime solicitacao ao usuario.
    cout << texto_nome << " ";                                                                 // Imprime nome do campo.
    cin.getline(campo1, 80);
    cout << texto_endereco << " ";                                                             // Imprime nome do campo.
    cin.getline(campo2, 80);
    cout << texto_cep << " ";                                                                  // Imprime nome do campo.
    cin.getline(campo3, 80);
    cout << texto_cpf << " ";                                                                  // Imprime nome do campo.
    cin.getline(campo4, 80);
    cout << texto_senha << " ";                                                                // Imprime nome do campo.
    cin.getline(campo5, 80);
    cout << texto_conta << " ";                                                                // Imprime nome do campo.
    cin.getline(campo6, 80);
    cout << texto_agencia << " ";                                                              // Imprime nome do campo.
    cin.getline(campo7, 80);
    cout << texto_banco << " ";                                                                // Imprime nome do campo.
    cin.getline(campo8, 80);

    // -- Valores definidos para que testes sejam realizados
    string campo_1, campo_2, campo_3, campo_4, campo_5, campo_6, campo_7, campo_8;
    campo_1 = "Igor";
    campo_2 = "Jardim Botanico";
    campo_3 = "70350760";
    campo_4 = "06589184194";
    campo_5 = "123456";
    campo_6 = "234690-0";
    campo_7 = "1234";
    campo_8 = "341";

    try{
        nome.SetNome(string(campo1));
        endereco.SetEndereco(string(campo2));
        cep.SetCep(string(campo3));
        cpf.SetCpf(string(campo4));
        senha.SetSenha(string(campo5));
        numero.SetNumero(string(campo6));
        agencia.SetCodigoAgencia(string(campo7));
        banco.SetCodigoBanco(string(campo8));
    }
    catch(invalid_argument &exp){
        cout << texto_incorreto << endl;                                                                // Informa formato incorreto.
        getch();                                                                                // Leitura de caracter digitado.
        return;
    }

    // Instancia e inicializa entidades.
    Usuario usuario(nome, cpf, senha, endereco, cep);
    Conta conta(banco, agencia, numero);
    conta.setUsuarioCPF(cpf);

    // Cadastra usuario e conta.
    if(cntrServicoPessoal->cadastrarUsuario(usuario))
        if(cntrServicoProdutosFinanceiros->cadastrarConta(conta)){
            cout << texto_sucesso << endl;                                                                    // Informa sucesso.
            getch();
            return;
        }

    cout << texto_falha << endl;                                                                            // Informa falha.
    getch();

    return;
}


//--------------------------------------------------------------------------------------------
void CntrApresentacaoPessoal::consultarDadosPessoais(CPF cpf) {
    CLR_SCR;
    cout << "Informacoes pessoais: " << endl;
    Usuario usuario = cntrServicoPessoal->consultarUsuario(cpf);
    cout << "Nome: " << usuario.getNome().GetNome() << endl;
    cout << "CPF: " << usuario.getCPF().GetCpf() << endl;
    cout << "Endereco: " << usuario.getEndereco().GetEndereco() << endl;
    cout << "CEP: " << usuario.getCEP().GetCep() << endl;

    char texto[]="Digite algo.";             // Mensagem a ser apresentada.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}


//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::executar(){

    // Mensagens a serem apresentadas na tela simplificada de produtos financeiros.
    char texto1[] = "Selecione um dos servicos : ";
    char texto2[] = "1 - Consultar produto de investimento.";
    char texto3[] = "2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de laco.

    while(apresentar){

        // Apresenta tela simplificada de produtos financeiros.
        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada.

        switch(campo){
            case 1: consultarProdutoInvestimento();
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::executar(CPF cpf){

    // Mensagens a serem apresentadas tela completa de produtos financeiros.
    char texto1[] ="Selecione um dos servicos : ";
    char texto2[] ="1 - Consultar conta corrente.";
    char texto3[] ="2 - Cadastrar produto de investimento.";
    char texto4[] ="3 - Descadastrar produto de investimento.";
    char texto5[] ="4 - Consultar produto de investimento.";
    char texto6[] ="5 - Realizar aplicacao em produto de investimento.";
    char texto7[] ="6 - Listar aplicacoes em produto de investimento.";
    char texto8[] ="7 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de laco.

    while(apresentar){

        // Apresenta tela completa de produtos financeiros.
        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.
        cout << texto5 << endl;                                                                 // Imprime nome do campo.
        cout << texto6 << endl;                                                                 // Imprime nome do campo.
        cout << texto7 << endl;                                                                 // Imprime nome do campo.
        cout << texto8 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversao de ASCII.

        switch(campo){
            case 1: consultarConta(cpf);
                    break;
            case 2: cadastrarProdutoInvestimento();
                    break;
            case 3: descadastrarProdutoInvestimento();
                    break;
            case 4: consultarProdutoInvestimento();
                    break;
            case 5: realizarAplicacao();
                    break;
            case 6: listarAplicacoes();
                    break;
            case 7: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::consultarConta(CPF cpf){

    CLR_SCR;

    Conta conta = cntr->consultarConta(cpf);
    cout << "Numero da conta: " << conta.getNumero().GetNumero() << endl;

    char texto[]="Digite algo.";             // Mensagem a ser apresentada.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::cadastrarProdutoInvestimento(){
    // Mensagens a serem apresentadas na tela de cadastramento.
    char texto_intro[]  = "Preencha os seguintes campos: ";
    char texto_um[]     = "Codigo do Produto:";
    char texto_dois[]   = "Classe do Produto:";
    char texto_tres[]   = "Emissor:";
    char texto_quatro[] = "Prazo:";
    char texto_cinco[]  = "Data:";
    char texto_seis[]   = "Taxa:";
    char texto_sete[]   = "Horario:";
    char texto_oito[]   = "Valor Minimo:";
    char texto_incorreto[] = "Dados em formato incorreto. Digite algo.";
    char texto_sucesso[]   = "Sucesso no cadastramento. Digite algo.";
    char texto_falha[]     = "Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];                            // Cria campos para entrada dos dados.
    char campo6[80], campo7[80], campo8[80];                                                    // Cria campos para entrada dos dados.
    // Instancia os dominios.

    CodigoProduto codigoProduto;
    Classe classe;
    Emissor emissor;
    Prazo prazo;
    Data data;
    Taxa taxa;
    Horario horario;
    ValorMinimo valorMinimo;

    CLR_SCR;

    cout << texto_intro << endl;
    cout << texto_um << " ";
    cin.getline(campo1, 80);
    cout << texto_dois << " ";
    cin.getline(campo2, 80);
    cout << texto_tres << " ";
    cin.getline(campo3, 80);
    cout << texto_quatro<< " ";
    cin.getline(campo4, 80);
    cout << texto_cinco << " ";
    cin.getline(campo5, 80);
    cout << texto_seis << " ";
    cin.getline(campo6, 80);
    cout << texto_sete << " ";
    cin.getline(campo7, 80);
    cout << texto_oito << " ";
    cin.getline(campo8, 80);

    // -- Valores definidos para que testes sejam realizados
    string campo_1, campo_2, campo_3, campo_4, campo_5, campo_6, campo_7, campo_8;
    campo_1 = "123";
    campo_2 = "CDB";
    campo_3 = "Itau Personalite";
    campo_4 = "12";
    campo_5 = "01/10/2020";
    campo_6 = "150";
    campo_7 = "15:30";
    campo_8 = "1000";

    try{
        codigoProduto.SetCodigoProduto(string(campo1));
        classe.SetClasse(string(campo2));
        emissor.SetEmissor(string(campo3));
        prazo.SetPrazo(stoi(campo4));
        data.SetData(string(campo5));
        taxa.SetTaxa(stof(campo6));
        horario.SetHorario(string(campo7));
        valorMinimo.SetValorMinimo(stod(campo8));
    }
    catch(invalid_argument &exp){
        cout << texto_incorreto << endl;                                                                // Informa formato incorreto.
        getch();                                                                                // Leitura de caracter digitado.
        return;
    }


    Produto produto(codigoProduto, classe, emissor,
                 prazo, data, taxa, horario, valorMinimo);


    if(cntr->cadastrarProdutoInvestimento(produto)){
        cout << texto_sucesso << endl;                                                                    // Informa sucesso.
        getch();
        return;
    }

    cout << texto_falha << endl;                                                                            // Informa falha.
    getch();

    return;

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::descadastrarProdutoInvestimento(){
    CLR_SCR;

    char texto_sucesso[]   = "Sucesso no descadastramento. Digite algo.";
    char texto_falha[]     = "Falha no descadastramento. Digite algo.";

    char numeroProduto[80];
    cout << "Codigo do produto de investimento: ";
    cin.getline(numeroProduto, 80);
    CodigoProduto codigoProduto(numeroProduto);

    if(cntr->descadastrarProdutoInvestimento(codigoProduto)){
        cout << texto_sucesso << endl;                                                                    // Informa sucesso.
        getch();
        return;
    }

    cout << texto_falha << endl;                                                                            // Informa falha.
    getch();

    return;

}


//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::consultarProdutoInvestimento(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar produto investimento nao implementado. Digite algo.";       // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::realizarAplicacao(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico realizar aplicacao nao implementado. Digite algo.";                   // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::listarAplicacoes(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico listar aplicacoes nao implementado. Digite algo.";                    // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}



