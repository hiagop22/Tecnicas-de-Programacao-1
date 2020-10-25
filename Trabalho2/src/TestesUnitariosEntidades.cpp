#include "TestesUnitariosEntidades.h"


void TesteUnitarioAplicacao::setUp(){
    aplicacao = new Aplicacao;
    estado = SUCESSO;
}

void TesteUnitarioAplicacao::tearDown(){
    delete aplicacao;
}

void TesteUnitarioAplicacao::testarCenarioSucesso(){
    CodigoAplicacao codigo;
    codigo.setCodigo(VALOR_VALIDO);
    aplicacao->setCodigo(codigo);
    if(aplicacao->getCodigo().getCodigo() != VALOR_VALIDO)
        estado = FALHA;
    ValorDeAplicacao valor;
    valor.setValor(VALOR_VALIDO);
    aplicacao->setValor(valor);
    if(aplicacao->getValor().getValor() != VALOR_VALIDO)
        estado = FALHA;
    Data data;
    data.setData(VALOR_VALIDO);
    aplicacao->setData(data);
    if(aplicacao->getData().getData() != VALOR_VALIDO)
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
    estado = sucesso;
}

void TesteUnitarioConta::tearDown(){
    delete conta;
}

void TesteUnitarioConta::testarCenarioSucesso(){
    CodigoBanco banco;
    banco.setBanco(VALOR_VALIDO);
    conta->setBanco(banco);
    if(conta->getBanco().getBanco() != VALOR_VALIDO)
        estado = FALHA;
    CodigoAgencia agencia;
    agencia.setAgencia(VALOR_VALIDO);
    conta->setAgencia(banco);
    if(conta->getAgencia().getAgencia() != VALOR_VALIDO)
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
    nome.setNome(VALOR_VALIDO);
    usuario->setNome(nome);
    if(usuario->getNome().getNome() != VALOR_VALIDO)
        estado = FALHA;
    Endereco endereco;
    endereco.setEndereco(VALOR_VALIDO);
    usuario->setEndereco(endereco);
    if(usuario->getEndereco().getEndereco() != VALOR_VALIDO)
        estado = FALHA;
    Cep cep;
    cep.setCep(VALOR_VALIDO);
    usuario->setCep(cep);
    if(usuario->getCep().getCep() != VALOR_VALIDO)
        estado = FALHA;
    Cpf cpf;
    cpf.setCpf(VALOR_VALIDO);
    usuario->setCpf(cpf);
    if(usuario->getCpf().getCpf() != VALOR_VALIDO)
        estado = FALHA;
    Senha senha;
    senha.setSenha(VALOR_VALIDO);
    usuario->setSenha(senha);
    if(usuario->getSenha().getSenha() != VALOR_VALIDO)
        estado = FALHA;
}

int TesteUnitarioUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
