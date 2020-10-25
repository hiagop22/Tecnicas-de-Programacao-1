#ifndef TESTESUNITARIOSENTIDADES_H
#define TESTESUNITARIOSENTIDADES_H
#include "Dominios.h"

class TesteUnitarioEntidade{
protected:
    int estado;

    virtual void setUp() = 0;
    virtual void tearDown() = 0;
    virtual void testarCenarioSucesso();
public:
    const static int SUCESSO = 1;
    const static int FALHA = 0;

    virtual int run() = 0;
};

class TesteUnitarioAplicacao: public TesteUnitarioEntidade{
private:
    CodigoAplicacao* codigo;
    ValorDeAplicacao* valor;
    Data* data;

    const string CODIGO_APLICACAO_VALIDO;
    const int VALOR_APLICACAO_VALIDO = 500;
    const string DATA_VALIDA;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};

class TesteUnitarioConta: public TesteUnitarioEntidade{
private:
    CodigoBanco* banco;
    CodigoAgencia* agencia;
    Numero* numero;

    const string CODIGO_BANCO_VALIDO;
    const string CODIGO_AGENCIA_VALIDO;
    const string NUMERO_VALIDO;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};

class TesteUnitarioProduto: public TesteUnitarioEntidade{
private:
    CodigoProduto* codigo;
    Classe* classe;
    Emissor* emissor;
    Prazo* prazo;
    Data* vencimento;
    Taxa* taxa;
    Horario* horario;
    ValorMinimo* valor;

    const string CODIGO_PRODUTO_VALIDO;
    const string NOME_CLASSE_VALIDO;
    const string NOME_EMISSOR_VALIDO;
    const int PRAZO_VALIDO = 24;
    const string DATA_VENCIMENTO_VALIDO;
    const int TAXA_VALIDA = 15;
    const string HORARIO_VALIDO;
    const int VALOR_MINIMO_VALIDO = 100;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};

class TesteUnitarioUsuario: public TesteUnitarioEntidade{
private:
    Nome* nome;
    Endereco* endereco;
    Cep* cep;
    Cpf* cpf;
    Senha* senha;

    const string NOME_VALIDO;
    const string ENDERECO_VALIDO;
    const int CEP_VALIDO = 1111111;
    const string CPF_VALIDO;
    const string SENHA_VALIDA;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};


#endif // TESTESUNITARIOSENTIDADES_H
