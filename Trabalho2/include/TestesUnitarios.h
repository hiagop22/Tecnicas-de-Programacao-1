#ifndef TESTESUNITARIOS_H
#define TESTESUNITARIOS_H

#include<string>
#include "Dominios.h"

using namespace std;

class TesteUnitario{
protected:
    // Estado de teste
    int estado;

    virtual void setUp() = 0;
    //  métodos virtuais puros, logo todas as classes filhas
    //  devem implementá-los
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

    // Ponteiro para a classe Cep que será criado
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

    // Ponteiro para a classe Classe que será criado
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

    // Ponteiro para a classe CodigoAgencia que será criado
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

    // Ponteiro para a classe CodigoAplicaco que será criado
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

    // Ponteiro para a classe CodigoBanco que será criado
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

    // Ponteiro para a classe CodigoProduto que será criado
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

    // Ponteiro para a classe Cpf que será criado
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

    // Ponteiro para a classe Data que será criado
    Data *data;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};
class TesteUnitarioEmissor: public TesteUnitario{
private:
    const static string NOME_EMISSOR_VALIDO;
    const static string NOME_EMISSOR_INVALIDO;

    // Ponteiro para a classe Emissor que será criado
    Emissor *emissor;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};


class TesteUnitarioEndereco: public TesteUnitario{
private:
    const static string ENDERECO_VALIDO;
    const static string ENDERECO_INVALIDO;

    // Ponteiro para a Classe Endereco que será criado
    Endereco* endereco;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioHorario: public TesteUnitario{
private:
    const static string HORARIO_VALIDO;
    const static string HORARIO_INVALIDO;

    // Ponteiro para a Classe Horario que será criado
    Horario* horario;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioNome: public TesteUnitario{
private:
    const static string NOME_VALIDO;
    const static string NOME_INVALIDO;

    // Ponteiro para a Classe Nome que será criado
    Nome* nome;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioNumero: public TesteUnitario{
private:
    const static string NUMERO_VALIDO;
    const static string NUMERO_INVALIDO;

    // Ponteiro para a Classe Numero que será criado
    Numero* numero;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioPrazo: public TesteUnitario{
private:
    const static int PRAZO_VALIDO;
    const static int PRAZO_INVALIDO;

    // Ponteiro para a Classe Prazo que será criado
    Prazo* prazo;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioSenha: public TesteUnitario{
private:
    const static string SENHA_VALIDA;
    const static string SENHA_INVALIDA;

    // Ponteiro para a Classe Senha que será criado
    Senha* senha;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioTaxa: public TesteUnitario{
private:
    const static int TAXA_VALIDA;
    const static int TAXA_INVALIDA;

    // Ponteiro para a Classe Taxa que será criado
    Taxa* taxa;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioValorAplicacao: public TesteUnitario{
private:
    const static int VALOR_APLICACAO_VALIDO;
    const static int VALOR_APLICACAO_INVALIDO;

    // Ponteiro para a Classe ValorAplicacao que será criado
    ValorDeAplicacao* valorDeAplicacao;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};

class TesteUnitarioValorMinimo: public TesteUnitario{
private:
    const static int VALOR_MINIMO_VALIDO;
    const static int VALOR_MINIMO_INVALIDO;

    // Ponteiro para a Classe Valor Minimo que será criado
    ValorMinimo* valorMinimo;

    //Declaração de métodos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};
#endif // TESTESUNITARIOS_H
