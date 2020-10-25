#include "TestesUnitariosEntidades.h"


void TesteUnitarioProduto::setUp(){
    produto = new Produto();
    estado = SUCESSO;
}

void TesteUnitarioProduto::tearDown(){
    delete produto;
}

void TesteUnitarioProduto::testarCenarioSucesso(){
    CodigoProduto codigo;
    codigo.set(CODIGO_PRODUTO_VALIDO);
    produto->setCodigo(codigo);
    if(produto->getCodigo().get() != CODIGO_PRODUTO_VALIDO)
        estado = FALHA;

    Classe classe;
    classe.set(CLASSE_VALIDA);
    produto->setClasse(classe);
    if(produto->getClasse().get() != CLASSE_VALIDA)
        estado = FALHA;

    Emissor emissor;
    emissor.set(EMISSOR_VALIDO);
    produto->setEmissor(emissor);
    if(produto->getEmissor().get() != EMISSOR_VALIDO)
        estado = FALHA;

    Prazo prazo;
    prazo.set(PRAZO_VALIDO);
    produto->setPrazo(prazo);
    if(produto->getPrazo().get() != PRAZO_VALIDO)
        estado = FALHA;

    Data vencimento;
    vencimento.set(VENCIMENTO_VALIDO);
    produto->setVencimento(vencimento);
    if(produto->getVencimento().get() != VENCIMENTO_VALIDO)
        estado = FALHA;

    Taxa taxa;
    prazo.set(TAXA_VALIDA);
    produto->setTaxa(taxa);
    if(produto->getTaxa().get() != TAXA_VALIDA)
        estado = FALHA;

    Horario horario;
    prazo.set(HORARIO_VALIDO);
    produto->setHorario(horario);
    if(produto->getHorario().get() != HORARIO_VALIDO)
        estado = FALHA;

    ValorMinimo valor;
    prazo.set(VALOR_MINIMO_VALIDO);
    produto->setValor(prazo);
    if(produto->getValor().get() != VALOR_MINIMO_VALIDO)
        estado = FALHA;
}

void TesteUnitarioProduto::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
