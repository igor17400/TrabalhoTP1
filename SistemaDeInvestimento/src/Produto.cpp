#include <ctime>
#include <iostream>
#include <string>

#include "Produto.h"
#include "CodigoProduto.h"
#include "Classe.h"
#include "Emissor.h"
#include "Prazo.h"
#include "Data.h"
#include "Taxa.h"
#include "Horario.h"
#include "ValorMinimo.h"

using namespace std;

Produto::Produto(const CodigoProduto& codigoProduto, const Classe& classe, const Emissor& emissor,
                 const Prazo& prazo, const Data& vencimento, const Taxa& taxa,
                 const Horario& horario, const ValorMinimo& valorMinimo)
:   codigoProduto(codigoProduto),
    classe(classe),
    prazo(prazo),
    vencimento(vencimento),
    taxa(taxa),
    horario(horario),
    valorMinimo(valorMinimo)
    {}

