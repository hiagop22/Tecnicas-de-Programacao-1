#include "TestesUnitarios.h"
#include <stdexcept>

// Declaração de atributos
const string TesteUnitarioClasse::NOME_CLASSE_VALIDO = "CDB";
const string TesteUnitarioClasse::NOME_CLASSE_INVALIDO = "ETF";

// Declaração de métodos
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
