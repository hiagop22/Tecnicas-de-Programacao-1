#ifndef TESTESUNITARIOS_H
#define TESTESUNITARIOS_H

#include<string>
#include "Dominios.h"

using namespace std;

// Classe abstrata TesteUnitário
class TesteUnitario{
protected:
    // Estado de teste
    int estado;

    //  Métodos virtuais puros, logo todas as classes filhas
    //  devem implementá-los
    virtual void setUp() = 0;
    virtual void tearDown() = 0;
    virtual void testarCenarioSucesso() = 0;
    virtual void testarCenarioFalha() = 0;
public:
    const static int SUCESSO = 1;
    const static int FALHA = -1;

    virtual int run() = 0;
};

class TesteUnitarioCep: public TesteUnitario{
private:
    const static int NUMERO_CEP_VALIDO = 1111111;
    const static int NUMERO_CEP_INVALIDO = 0;

    // Ponteiro para o Classe classe que será criado
    Cep *cep;

    //Declaração de métodos
    virtual void setUp();
    virtual void tearDown();
    virtual void testarCenarioSucesso();
    virtual void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioClasse: public TesteUnitario{
private:
    const static string NOME_CLASSE_VALIDO;
    const static string NOME_CLASSE_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    Classe *classe;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioCodigoAgencia: public TesteUnitario{
private:
    const static string CODIGO_AGENCIA_VALIDO;
    const static string CODIGO_AGENCIA_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    CodigoAgencia *codigoAgencia;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioCodigoAplicacao: public TesteUnitario{
private:
    const static string CODIGO_APLICACAO_VALIDO;
    const static string CODIGO_APLICACAO_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    CodigoAplicacao *codigoAplicacao;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioCodigoBanco: public TesteUnitario{
private:
    const static string CODIGO_BANCO_VALIDO;
    const static string CODIGO_BANCO_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    CodigoBanco *codigoBanco;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioCodigoProduto: public TesteUnitario{
private:
    const static string CODIGO_PRODUTO_VALIDO;
    const static string CODIGO_PRODUTO_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    CodigoProduto *codigoProduto;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioCpf: public TesteUnitario{
private:
    const static string NUMERO_CPF_VALIDO;
    const static string NUMERO_CPF_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    Cpf *cpf;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioData: public TesteUnitario{
private:
    const static string NUMERO_DATA_VALIDO;
    const static string NUMERO_DATA_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    Data *data;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

//class TesteUnitarioEmissor: public TesteUnitario{
//private:
//    const static string NOME_EMISSOR_VALIDO;
//    const static string NOME_EMISSOR_INVALIDO;
//
//    // Ponteiro para o Classe classe que será criado
//    Emissor *emissor;
//
//    //Declaração de métodos
//    void setUp();
//    void tearDown();
//    void testarCenarioSucesso();
//    void testarCenarioFalha();
//
//public:
//    int run();
//};

#endif // TESTESUNITARIOS_H
