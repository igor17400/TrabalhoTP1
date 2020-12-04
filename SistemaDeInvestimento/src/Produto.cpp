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

Produto::Produto() {}

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

void Produto::setCodigoProduto(const string str){
    CodigoProduto codigoProduto(str);
    this->codigoProduto = codigoProduto;
}

CodigoProduto Produto::getCodigoProduto() const{
    return this->codigoProduto;
}

void Produto::setClasse(const string str){
    Classe classe(str);
    this->classe = classe;
}

Classe Produto::getClasse() const{
    return this->classe;
}

void Produto::setEmissor(const string str){
    Emissor emissor(str);
    this->emissor = emissor;
}

Emissor Produto::getEmissor() const{
    return this->emissor;
}

void Produto::setPrazo(const int input){
    Prazo prazo(input);
    this->prazo = prazo;
}

Prazo Produto::getPrazo() const{
    return this->prazo;
}

void Produto::setVencimento(const string str){
    Data vencimento(str);
    this->vencimento = vencimento;
}

Data Produto::getVencimento() const{
    return this->vencimento;
}

void Produto::setTaxa(const int input){
    Taxa taxa(input);
    this->taxa = taxa;
}

Taxa Produto::getTaxa() const{
    return this->taxa;
}

void Produto::setHorario(const string str){
    Horario horario(str);
    this->horario = horario;
}

Horario Produto::getHorario() const{
    return this->horario;
}

void Produto::setValorMinimo(const int input){
    ValorMinimo valorMinimo(input);
    this->valorMinimo = valorMinimo;
}

ValorMinimo Produto::getValorMinimo() const{
    return this->valorMinimo;
}

void Produto::setContaNumero(const Numero& contaNumero){
    this->contaNumero = contaNumero;
}

Numero Produto::getContaNumero() const {
    return this->contaNumero;
}

