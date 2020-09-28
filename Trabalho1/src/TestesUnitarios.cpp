#include "TestesUnitarios.h"
#include <iostream>
#include <stdexcept>

using namespace std;

// ----------------- Inicialização de atributos estáticos ----------------- //
// -> Classe <- //
const string TesteUnitarioClasse::NOME_CLASSE_VALIDO = "CDB";
const string TesteUnitarioClasse::NOME_CLASSE_INVALIDO = "ETF";

// -> Código de Agencia <- //
const string TesteUnitarioCodigoAgencia::CODIGO_AGENCIA_VALIDO = "1234";
const string TesteUnitarioCodigoAgencia::CODIGO_AGENCIA_INVALIDO = "0000";

// -> Código de Aplicacão <- //
const string TesteUnitarioCodigoAplicacao::CODIGO_APLICACAO_VALIDO = "12345";
const string TesteUnitarioCodigoAplicacao::CODIGO_APLICACAO_INVALIDO = "00000";

// -> Código de Banco <- //
const string TesteUnitarioCodigoBanco::CODIGO_BANCO_VALIDO = "033";
const string TesteUnitarioCodigoBanco::CODIGO_BANCO_INVALIDO = "003";

// -> Código de Produto <- //
const string TesteUnitarioCodigoProduto::CODIGO_PRODUTO_VALIDO = "033";
const string TesteUnitarioCodigoProduto::CODIGO_PRODUTO_INVALIDO = "000";

// -> CPF <- //
const string TesteUnitarioCpf::NUMERO_CPF_VALIDO = "529.982.247-25";
const string TesteUnitarioCpf::NUMERO_CPF_INVALIDO = "000.000.000-00";

// -> Data <- //
const string TesteUnitarioData::NUMERO_DATA_VALIDO = "10/10/2020";
const string TesteUnitarioData::NUMERO_DATA_INVALIDO = "32/13/2010";

// -> Emissor <- //
//const string TesteUnitarioEmissor::NOME_EMISSOR_VALIDO = "Hiago16012";
//const string TesteUnitarioEmissor::NOME_EMISSOR_INVALIDO = "hi..";
//


// ----------------- Definição de métodos ----------------- //

// -> Cep <- //
void TesteUnitarioCep::setUp(){
    cep = new Cep();
    estado = SUCESSO;
}

void TesteUnitarioCep::tearDown(){
    delete cep;
}

void TesteUnitarioCep::testarCenarioSucesso(){
    try{
        cep->setCep(NUMERO_CEP_VALIDO);
        if(cep->getCep() != NUMERO_CEP_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCep::testarCenarioFalha(){
    try{
    cep->setCep(NUMERO_CEP_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCep::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}


// -> Classe <- //
void TesteUnitarioClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}

void TesteUnitarioClasse::tearDown(){
    delete classe;
}

void TesteUnitarioClasse::testarCenarioSucesso(){
    try{
        classe->setClasse(NOME_CLASSE_VALIDO);
        if(classe->getClasse() != NOME_CLASSE_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioClasse::testarCenarioFalha(){
    try{
        classe->setClasse(NOME_CLASSE_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Código de Agencia <- //
void TesteUnitarioCodigoAgencia::setUp(){
    codigoAgencia = new CodigoAgencia();
    estado = SUCESSO;
}

void TesteUnitarioCodigoAgencia::tearDown(){
    delete codigoAgencia;
}

void TesteUnitarioCodigoAgencia::testarCenarioSucesso(){
    try{
        codigoAgencia->setCodigoAgencia(CODIGO_AGENCIA_VALIDO);
        if(codigoAgencia->getCodigoAgencia() != CODIGO_AGENCIA_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCodigoAgencia::testarCenarioFalha(){
    try{
        codigoAgencia->setCodigoAgencia(CODIGO_AGENCIA_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCodigoAgencia::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Código de Aplicação <- //
void TesteUnitarioCodigoAplicacao::setUp(){
    codigoAplicacao = new CodigoAplicacao();
    estado = SUCESSO;
}

void TesteUnitarioCodigoAplicacao::tearDown(){
    delete codigoAplicacao;
}

void TesteUnitarioCodigoAplicacao::testarCenarioSucesso(){
    try{
        codigoAplicacao->setCodigoAplicacao(CODIGO_APLICACAO_VALIDO);
        if(codigoAplicacao->getCodigoAplicacao() != CODIGO_APLICACAO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCodigoAplicacao::testarCenarioFalha(){
    try{
        codigoAplicacao->setCodigoAplicacao(CODIGO_APLICACAO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCodigoAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Código de Banco <- //
void TesteUnitarioCodigoBanco::setUp(){
    codigoBanco = new CodigoBanco();
    estado = SUCESSO;
}

void TesteUnitarioCodigoBanco::tearDown(){
    delete codigoBanco;
}

void TesteUnitarioCodigoBanco::testarCenarioSucesso(){
    try{
        codigoBanco->setCodigoBanco(CODIGO_BANCO_VALIDO);
        if(codigoBanco->getCodigoBanco() != CODIGO_BANCO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCodigoBanco::testarCenarioFalha(){
    try{
        codigoBanco->setCodigoBanco(CODIGO_BANCO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCodigoBanco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Código de Produto <- //
void TesteUnitarioCodigoProduto::setUp(){
    codigoProduto = new CodigoProduto();
    estado = SUCESSO;
}

void TesteUnitarioCodigoProduto::tearDown(){
    delete codigoProduto;
}

void TesteUnitarioCodigoProduto::testarCenarioSucesso(){
    try{
        codigoProduto->setCodigoProduto(CODIGO_PRODUTO_VALIDO);
        if(codigoProduto->getCodigoProduto() != CODIGO_PRODUTO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCodigoProduto::testarCenarioFalha(){
    try{
        codigoProduto->setCodigoProduto(CODIGO_PRODUTO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCodigoProduto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Cpf <- //
void TesteUnitarioCpf::setUp(){
    cpf = new Cpf();
    estado = SUCESSO;
}

void TesteUnitarioCpf::tearDown(){
    delete cpf;
}

void TesteUnitarioCpf::testarCenarioSucesso(){
    try{
        cpf->setNumeroCpf(NUMERO_CPF_VALIDO);
        if(cpf->getNumeroCpf() != NUMERO_CPF_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCpf::testarCenarioFalha(){
    try{
        cpf->setNumeroCpf(NUMERO_CPF_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCpf::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Data <- //
void TesteUnitarioData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TesteUnitarioData::tearDown(){
    delete data;
}

void TesteUnitarioData::testarCenarioSucesso(){
    try{
        data->setNumeroData(NUMERO_DATA_VALIDO);
        if(data->getNumeroData() != NUMERO_DATA_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioData::testarCenarioFalha(){
    try{
        data->setNumeroData(NUMERO_DATA_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

