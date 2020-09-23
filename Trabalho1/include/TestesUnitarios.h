#ifndef TESTESUNITARIOS_H
#define TESTESUNITARIOS_H

#include<string>
#include "Dominios.h"

using namespace std;

class TesteUnitarioClasse{
private:
    const static string NOME_CLASSE_VALIDO;
    const static string NOME_CLASSE_INVALIDO;

    // Ponteiro para o Classe classe que ser� criado
    Classe *classe;

    // Estado de teste
    int estado;

    //Declara��o de m�todos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO = 1;
    const static int FALHA = -1;

    int run();
};

#endif // TESTESUNITARIOS_H
