#include "TestesUnitarios.h"
#include <stdexcept>

// ----------------- Inicialização de atributos estáticos ----------------- //
// -> Classe <- //
const string TesteUnitarioClasse::NOME_CLASSE_VALIDO = "CDB";
const string TesteUnitarioClasse::NOME_CLASSE_INVALIDO = "ETF";

// -> Classe <- //
const string TesteUnitarioCodigoAgencia::CODIGO_AGENCIA_VALIDO = "1234";
const string TesteUnitarioCodigoAgencia::CODIGO_AGENCIA_INVALIDO = "0000";

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
