#include "TestesUnitarios.h"
#include <stdexcept>

// ----------------- Inicializa��o de atributos est�ticos ----------------- //
// -> Classe <- //
const string TesteUnitarioClasse::NOME_CLASSE_VALIDO = "CDB";
const string TesteUnitarioClasse::NOME_CLASSE_INVALIDO = "ETF";

// -> C�digo de Agencia <- //
const string TesteUnitarioCodigoAgencia::CODIGO_AGENCIA_VALIDO = "1234";
const string TesteUnitarioCodigoAgencia::CODIGO_AGENCIA_INVALIDO = "0000";

// -> C�digo de Aplicac�o <- //
const string TesteUnitarioCodigoAplicacao::CODIGO_APLICACAO_VALIDO = "12345";
const string TesteUnitarioCodigoAplicacao::CODIGO_APLICACAO_INVALIDO = "00000";


// ----------------- Defini��o de m�todos ----------------- //
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

// -> C�digo de Agencia <- //
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


// -> C�digo de Aplica��o <- //
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
