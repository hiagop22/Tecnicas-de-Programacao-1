#ifndef TESTESUNITARIOSENTIDADES_H
#define TESTESUNITARIOSENTIDADES_H
#include "Entidades.h"
#include "Dominios.h"

using namespace std;


class TesteUnitarioEntidade{
protected:
    int estado;

//    virtual void setUp() = 0;
//    virtual void tearDown() = 0;
//    virtual void testarCenarioSucesso() = 0;
public:
//    TesteUnitarioEntidade();
//    virtual ~TesteUnitarioEntidade();

    const static int SUCESSO = 1;
    const static int FALHA = 0;
//    virtual int run() = 0;
};

class TesteUnitarioAplicacao: public TesteUnitarioEntidade{
private:
    Aplicacao* aplicacao;

    const static string CODIGO_APLICACAO_VALIDO;
    const static int VALOR_APLICACAO_VALIDO = 500;
    const static string DATA_VALIDA;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:

    int run();
};

class TesteUnitarioConta: public TesteUnitarioEntidade{
private:
    Conta* conta;

    const static string CODIGO_BANCO_VALIDO;
    const static string CODIGO_AGENCIA_VALIDO;
    const static string NUMERO_VALIDO;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};

class TesteUnitarioProduto: public TesteUnitarioEntidade{
private:
    Produto* produto;

    const static string CODIGO_PRODUTO_VALIDO;
    const static string CLASSE_VALIDA;
    const static string EMISSOR_VALIDO;
    const static int PRAZO_VALIDO = 24;
    const static string VENCIMENTO_VALIDO;
    const static int TAXA_VALIDA = 15;
    const static string HORARIO_VALIDO;
    const static int VALOR_MINIMO_VALIDO = 100;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};

class TesteUnitarioUsuario: public TesteUnitarioEntidade{
private:
    Usuario* usuario;

    const static string NOME_VALIDO;
    const static string ENDERECO_VALIDO;
    const static int CEP_VALIDO = 1111111;
    const static string CPF_VALIDO;
    const static string SENHA_VALIDA;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};


#endif // TESTESUNITARIOSENTIDADES_H
