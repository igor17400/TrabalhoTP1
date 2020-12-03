#ifndef BUILDERS_H
#define BUILDERS_H


#include "interfaces.h"
#include "CntrApresentacaoControle.h"
#include "ControladoraServico.h"
#include "stubs.h"

class BuilderSistema {
    private:
        CntrApresentacaoControle *cntrApresentacaoControle;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoPessoal *cntrApresentacaoPessoal;
        IApresentacaoProdutosFinanceiros *cntrApresentacaoProdutosFinanceiros;
        IServicoAutenticacao *cntrServicoAutenticacao;
        IServicoPessoal *cntrServicoPessoal;
        IServicoProdutosFinanceiros *cntrServicoProdutosFinanceiros;
    public:
        CntrApresentacaoControle* construir();
        ~BuilderSistema();
};

#endif // BUILDERS_H
