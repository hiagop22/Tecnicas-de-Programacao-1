#ifndef TESTESUNITARIOS_H
#define TESTESUNITARIOS_H

#include<string>
#include "Dominios.h"

using namespace std;

class TesteUnitario{
protected:
    // Estado de teste
    int estado;

/// \param
///
/// \throw invalid argument

    virtual void setUp() = 0;
    //  M�todos virtuais puros, logo todas as classes filhas
    //  devem implement�-los
/// Retorna a quantidade de alunos cadastrados.
/// \return Quantidade de alunos cadastrados.
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

    // Ponteiro para o Classe classe que ser� criado
    Cep *cep;

    //Declara��o de m�todos
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

    // Ponteiro para o Classe classe que ser� criado
    Classe *classe;

    //Declara��o de m�todos
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

    // Ponteiro para o Classe classe que ser� criado
    CodigoAgencia *codigoAgencia;

    //Declara��o de m�todos
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

    // Ponteiro para o Classe classe que ser� criado
    CodigoAplicacao *codigoAplicacao;

    //Declara��o de m�todos
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

    // Ponteiro para o Classe classe que ser� criado
    CodigoBanco *codigoBanco;

    //Declara��o de m�todos
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

    // Ponteiro para o Classe classe que ser� criado
    CodigoProduto *codigoProduto;

    //Declara��o de m�todos
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

    // Ponteiro para o Classe classe que ser� criado
    Cpf *cpf;

    //Declara��o de m�todos
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

    // Ponteiro para o Classe classe que ser� criado
    Data *data;

    //Declara��o de m�todos
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

    // Ponteiro para o Classe classe que ser� criado
    Emissor *emissor;

    //Declara��o de m�todos
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

    // Ponteiro para a Classe Endere�o que ser� criado
    Endereco* endereco;

    //Declara��o de m�todos
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

    // Ponteiro para a Classe Hor�rio que ser� criado
    Horario* horario;

    //Declara��o de m�todos
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

    // Ponteiro para a Classe Nome que ser� criado
    Nome* nome;

    //Declara��o de m�todos
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

    // Ponteiro para a Classe N�mero que ser� criado
    Numero* numero;

    //Declara��o de m�todos
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

    // Ponteiro para a Classe Prazo que ser� criado
    Prazo* prazo;

    //Declara��o de m�todos
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

    // Ponteiro para a Classe Senha que ser� criado
    Senha* senha;

    //Declara��o de m�todos
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

    // Ponteiro para a Classe Taxa que ser� criado
    Taxa* taxa;

    //Declara��o de m�todos
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

    // Ponteiro para a Classe Valor Aplica�ao que ser� criado
    ValorDeAplicacao* valorDeAplicacao;

    //Declara��o de m�todos
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

    // Ponteiro para a Classe Valor Minimo que ser� criado
    ValorMinimo* valorMinimo;

    //Declara��o de m�todos
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    int run();
};
#endif // TESTESUNITARIOS_H
