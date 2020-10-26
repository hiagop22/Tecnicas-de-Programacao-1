#ifndef TESTESUNITARIOS_H
#define TESTESUNITARIOS_H

#include<string>
#include "Dominios.h"

using namespace std;

/// Padrão para codificação de testes unitários das classes dominios.
class TesteUnitario{
protected:
    // Estado de teste
    int estado;

    // \brief Define o nome do emissor como o parametro recebido caso seja poss�vel.
    /// Instancia a classe ao qual o teste unit�rio est� validando.
    virtual void setUp() = 0;
    //  M�todos virtuais puros, logo todas as classes filhas
    //  devem implement�-los
    /// Chama o m�todo destrutor da instancia criada.
    virtual void tearDown() = 0;
    /// Testa um cen�rio em que a classe implementada n�o deve levantar excess�o.
    /// - Caso seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    virtual void testarCenarioSucesso() = 0;
    /// Testa um cen�rio em que a classe implementada deve levantar excess�o.
    /// - Caso n�o seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    virtual void testarCenarioFalha() = 0;
public:
    const static int SUCESSO = 1;
    const static int FALHA = -1;

    /// Chama os m�todos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    virtual int run() = 0;
};

/// Padr�o para codifica��o de teste unit�rio referente a classe Cep.
class TesteUnitarioCep: public TesteUnitario{
private:
    const static int NUMERO_CEP_VALIDO = 1111111;
    const static int NUMERO_CEP_INVALIDO = 0;

    // Ponteiro para o Classe classe que ser� criado
    Cep *cep;

    /// Instancia a classe Cep e atribue SUCESSO a vari�vel de estado.
    //Declara��o de m�todos
    virtual void setUp();
    /// Chama o m�todo destrutor da instancia criada.
    virtual void tearDown();
    /// Testa um cen�rio em que a classe implementada n�o deve levantar excess�o.
    /// - Caso seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    virtual void testarCenarioSucesso();
    /// Testa um cen�rio em que a classe implementada deve levantar excess�o.
    /// - Caso n�o seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    virtual void testarCenarioFalha();

public:
    /// Chama os m�todos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padr�o para codifica��o de teste unit�rio referente a classe Classe.
class TesteUnitarioClasse: public TesteUnitario{
private:
    const static string NOME_CLASSE_VALIDO;
    const static string NOME_CLASSE_INVALIDO;

    // Ponteiro para o Classe classe que ser� criado
    Classe *classe;

    /// Instancia a classe Classe e atribue SUCESSO a vari�vel de estado.
    //Declara��o de m�todos
    void setUp();
    /// Chama o m�todo destrutor da instancia de Classe.
    void tearDown();
    /// \brief Testa um cen�rio em que a classe implementada n�o deve levantar excess�o.
    /// - Caso seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioSucesso();
    /// \brief Testa um cen�rio em que a classe implementada deve levantar excess�o.
    /// - Caso n�o seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os m�todos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padr�o para codifica��o de teste unit�rio referente a classe CodigoAgencia.
class TesteUnitarioCodigoAgencia: public TesteUnitario{
private:
    const static string CODIGO_AGENCIA_VALIDO;
    const static string CODIGO_AGENCIA_INVALIDO;

    // Ponteiro para o Classe classe que ser� criado
    CodigoAgencia *codigoAgencia;

    /// Instancia a classe CodigoAgencia e atribue SUCESSO a vari�vel de estado.
    //Declara��o de m�todos
    void setUp();
    /// Chama o m�todo destrutor da instancia de CodigoAgencia.
    void tearDown();
    /// Testa um cen�rio em que a classe implementada n�o deve levantar excess�o.
    /// - Caso seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cen�rio em que a classe implementada deve levantar excess�o.
    /// - Caso n�o seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os m�todos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padr�o para codifica��o de teste unit�rio referente a classe CodigoAplicacao.
class TesteUnitarioCodigoAplicacao: public TesteUnitario{
private:
    const static string CODIGO_APLICACAO_VALIDO;
    const static string CODIGO_APLICACAO_INVALIDO;

    // Ponteiro para o Classe classe que ser� criado
    CodigoAplicacao *codigoAplicacao;

    /// Instancia a classe CodigoAplicacao e atribue SUCESSO a vari�vel de estado.
    //Declara��o de m�todos
    void setUp();
    /// Chama o m�todo destrutor da instancia de CodigoAplicacao.
    void tearDown();
    /// Testa um cen�rio em que a classe implementada n�o deve levantar excess�o.
    /// - Caso seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cen�rio em que a classe implementada deve levantar excess�o.
    /// - Caso n�o seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os m�todos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padr�o para codifica��o de teste unit�rio referente a classe CodigoBanco.
class TesteUnitarioCodigoBanco: public TesteUnitario{
private:
    const static string CODIGO_BANCO_VALIDO;
    const static string CODIGO_BANCO_INVALIDO;

    // Ponteiro para o Classe classe que ser� criado
    CodigoBanco *codigoBanco;

    /// Instancia a classe CodigoBanco e atribue SUCESSO a vari�vel de estado.
    //Declara��o de m�todos
    void setUp();
    /// Chama o m�todo destrutor da instancia de CodigoBanco.
    void tearDown();
    /// Testa um cen�rio em que a classe implementada n�o deve levantar excess�o.
    /// - Caso seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cen�rio em que a classe implementada deve levantar excess�o.
    /// - Caso n�o seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os m�todos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padr�o para codifica��o de teste unit�rio referente a classe CodigoProduto.
class TesteUnitarioCodigoProduto: public TesteUnitario{
private:
    const static string CODIGO_PRODUTO_VALIDO;
    const static string CODIGO_PRODUTO_INVALIDO;

    // Ponteiro para o Classe classe que ser� criado
    CodigoProduto *codigoProduto;

    /// Instancia a classe CodigoProduto e atribue SUCESSO a vari�vel de estado.
    //Declara��o de m�todos
    void setUp();
    /// Chama o m�todo destrutor da instancia de CodigoProduto.
    void tearDown();
    /// Testa um cen�rio em que a classe implementada n�o deve levantar excess�o.
    /// - Caso seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cen�rio em que a classe implementada deve levantar excess�o.
    /// - Caso n�o seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os m�todos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padr�o para codifica��o de teste unit�rio referente a classe Cpf.
class TesteUnitarioCpf: public TesteUnitario{
private:
    const static string NUMERO_CPF_VALIDO;
    const static string NUMERO_CPF_INVALIDO;

    // Ponteiro para o Classe classe que ser� criado
    Cpf *cpf;

    /// Instancia a classe Cpf e atribue SUCESSO a vari�vel de estado.
    //Declara��o de m�todos
    void setUp();
    /// Chama o m�todo destrutor da instancia de Cpf.
    void tearDown();
    /// Testa um cen�rio em que a classe implementada n�o deve levantar excess�o.
    /// - Caso seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cen�rio em que a classe implementada deve levantar excess�o.
    /// - Caso n�o seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os m�todos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padr�o para codifica��o de teste unit�rio referente a classe Data.
class TesteUnitarioData: public TesteUnitario{
private:
    const static string NUMERO_DATA_VALIDO;
    const static string NUMERO_DATA_INVALIDO;

    // Ponteiro para o Classe classe que ser� criado
    Data *data;

    /// Instancia a classe Data e atribue SUCESSO a vari�vel de estado.
    //Declara��o de m�todos
    void setUp();
    /// Chama o m�todo destrutor da instancia de Data.
    void tearDown();
    /// Testa um cen�rio em que a classe implementada n�o deve levantar excess�o.
    /// - Caso seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cen�rio em que a classe implementada deve levantar excess�o.
    /// - Caso n�o seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os m�todos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padr�o para codifica��o de teste unit�rio referente a classe Emissor.
class TesteUnitarioEmissor: public TesteUnitario{
private:
    const static string NOME_EMISSOR_VALIDO;
    const static string NOME_EMISSOR_INVALIDO;

    // Ponteiro para o Classe classe que ser� criado
    Emissor *emissor;

    /// Instancia a classe Emissor e atribue SUCESSO a vari�vel de estado.
    //Declara��o de m�todos
    void setUp();
    /// Chama o m�todo destrutor da instancia de Emissor.
    void tearDown();
    /// Testa um cen�rio em que a classe implementada n�o deve levantar excess�o.
    /// - Caso seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cen�rio em que a classe implementada deve levantar excess�o.
    /// - Caso n�o seja levantada alguma excess�o o valor estado ser� mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os m�todos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
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
