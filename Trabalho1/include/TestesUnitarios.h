#ifndef TESTESUNITARIOS_H
#define TESTESUNITARIOS_H

#include<string>
#include "Dominios.h"

using namespace std;

class TesteUnitarioCep{
private:
    const static int NUMERO_CEP_VALIDO = 1111111;
    const static int NUMERO_CEP_INVALIDO = 0;

    // Ponteiro para o Classe classe que será criado
    Cep *cep;

    // Estado de teste
    int estado;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO = 1;
    const static int FALHA = -1;

    int run();
};

class TesteUnitarioClasse{
private:
    const static string NOME_CLASSE_VALIDO;
    const static string NOME_CLASSE_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    Classe *classe;

    // Estado de teste
    int estado;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO = 1;
    const static int FALHA = -1;

    int run();
};

class TesteUnitarioCodigoAgencia{
private:
    const static string CODIGO_AGENCIA_VALIDO;
    const static string CODIGO_AGENCIA_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    CodigoAgencia *codigoAgencia;

    // Estado de teste
    int estado;

    //Declaração de métodos
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
