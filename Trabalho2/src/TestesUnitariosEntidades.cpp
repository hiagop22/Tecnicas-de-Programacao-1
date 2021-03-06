#include "TestesUnitariosEntidades.h"
#include <iostream>

using namespace std;

// ----------------- Inicializacao de Constantes ----------------- //
const string TesteUnitarioAplicacao::CODIGO_APLICACAO_VALIDO = "12345";
const string TesteUnitarioAplicacao::DATA_VALIDA = "10/10/2020";

const string TesteUnitarioConta::CODIGO_BANCO_VALIDO = "033";
const string TesteUnitarioConta::CODIGO_AGENCIA_VALIDO = "1234";
const string TesteUnitarioConta::NUMERO_VALIDO = "506323-1";

const string TesteUnitarioProduto::CODIGO_PRODUTO_VALIDO = "033";
const string TesteUnitarioProduto::CLASSE_VALIDA = "CDB";
const string TesteUnitarioProduto::EMISSOR_VALIDO = "Hiago16012";
const string TesteUnitarioProduto::VENCIMENTO_VALIDO = "10/10/2020";
const string TesteUnitarioProduto::HORARIO_VALIDO = "14:45";

const string TesteUnitarioUsuario::NOME_VALIDO = "Maicon Junior";
const string TesteUnitarioUsuario::ENDERECO_VALIDO = "Rua 01 Numero 15";
const string TesteUnitarioUsuario::CPF_VALIDO = "529.982.247-25";
const string TesteUnitarioUsuario::SENHA_VALIDA = "012345";



void TesteUnitarioAplicacao::setUp(){
    aplicacao = new Aplicacao;
    estado = SUCESSO;
}

void TesteUnitarioAplicacao::tearDown(){
    delete aplicacao;
}

void TesteUnitarioAplicacao::testarCenarioSucesso(){
    CodigoAplicacao codigo;
    codigo.set(CODIGO_APLICACAO_VALIDO);
    aplicacao->setCodigo(codigo);
    if(aplicacao->getCodigo().get() != CODIGO_APLICACAO_VALIDO)
        estado = FALHA;

    ValorDeAplicacao valor;
    valor.set(VALOR_APLICACAO_VALIDO);
    aplicacao->setValor(valor);
    if(aplicacao->getValor().get() != VALOR_APLICACAO_VALIDO)
        estado = FALHA;

    Data data;
    data.set(DATA_VALIDA);
    aplicacao->setData(data);
    if(aplicacao->getData().get() != DATA_VALIDA)
        estado = FALHA;
}

int TesteUnitarioAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TesteUnitarioConta::setUp(){
    conta = new Conta;
    estado = SUCESSO;
}

void TesteUnitarioConta::tearDown(){
    delete conta;
}

void TesteUnitarioConta::testarCenarioSucesso(){
    CodigoBanco banco;
    banco.set(CODIGO_BANCO_VALIDO);
    conta->setBanco(banco);
    if(conta->getBanco().get() != CODIGO_BANCO_VALIDO)
        estado = FALHA;

    CodigoAgencia agencia;
    agencia.set(CODIGO_AGENCIA_VALIDO);
    conta->setAgencia(agencia);
    if(conta->getAgencia().get() != CODIGO_AGENCIA_VALIDO)
        estado = FALHA;
}

int TesteUnitarioConta::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TesteUnitarioUsuario::setUp(){
    usuario = new Usuario;
    estado = SUCESSO;
}

void TesteUnitarioUsuario::tearDown(){
    delete usuario;
}

void TesteUnitarioUsuario::testarCenarioSucesso(){
    Nome nome;
    nome.set(NOME_VALIDO);
    usuario->setNome(nome);
    if(usuario->getNome().get() != NOME_VALIDO)
        estado = FALHA;

    Endereco endereco;
    endereco.set(ENDERECO_VALIDO);
    usuario->setEndereco(endereco);
    if(usuario->getEndereco().get() != ENDERECO_VALIDO)
        estado = FALHA;

    Cep cep;
    cep.set(CEP_VALIDO);
    usuario->setCep(cep);
    if(usuario->getCep().get() != CEP_VALIDO)
        estado = FALHA;

    Cpf cpf;
    cpf.set(CPF_VALIDO);
    usuario->setCpf(cpf);
    if(usuario->getCpf().get() != CPF_VALIDO)
        estado = FALHA;

    Senha senha;
    senha.set(SENHA_VALIDA);
    usuario->setSenha(senha);
    if(usuario->getSenha().get() != SENHA_VALIDA)
        estado = FALHA;
}

int TesteUnitarioUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


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
    taxa.set(TAXA_VALIDA);
    produto->setTaxa(taxa);
    if(produto->getTaxa().get() != TAXA_VALIDA)
        estado = FALHA;

    Horario horario;
    horario.set(HORARIO_VALIDO);
    produto->setHorario(horario);
    if(produto->getHorario().get() != HORARIO_VALIDO)
        estado = FALHA;

    ValorMinimo valor;
    valor.set(VALOR_MINIMO_VALIDO);
    produto->setValor(valor);
    if(produto->getValor().get() != VALOR_MINIMO_VALIDO)
        estado = FALHA;

}

int TesteUnitarioProduto::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
