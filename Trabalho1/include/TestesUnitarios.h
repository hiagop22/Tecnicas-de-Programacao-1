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

    // \brief Define o nome do emissor como o parametro recebido caso seja possível.
    /// Instancia a classe ao qual o teste unitário está validando.
    virtual void setUp() = 0;
    //  Métodos virtuais puros, logo todas as classes filhas
    //  devem implementá-los
    /// Chama o método destrutor da instancia criada.
    virtual void tearDown() = 0;
    /// Testa um cenário em que a classe implementada não deve levantar excessão.
    /// - Caso seja levantada alguma excessão o valor estado será mudado para FALHA.
    virtual void testarCenarioSucesso() = 0;
    /// Testa um cenário em que a classe implementada deve levantar excessão.
    /// - Caso não seja levantada alguma excessão o valor estado será mudado para FALHA.
    virtual void testarCenarioFalha() = 0;
public:
    const static int SUCESSO = 1;
    const static int FALHA = -1;

    /// Chama os métodos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    virtual int run() = 0;
};

/// Padrão para codificação de teste unitário referente a classe Cep.
class TesteUnitarioCep: public TesteUnitario{
private:
    const static int NUMERO_CEP_VALIDO = 1111111;
    const static int NUMERO_CEP_INVALIDO = 0;

    // Ponteiro para o Classe classe que será criado
    Cep *cep;

    /// Instancia a classe Cep e atribue SUCESSO a variável de estado.
    //Declaração de métodos
    virtual void setUp();
    /// Chama o método destrutor da instancia criada.
    virtual void tearDown();
    /// Testa um cenário em que a classe implementada não deve levantar excessão.
    /// - Caso seja levantada alguma excessão o valor estado será mudado para FALHA.
    virtual void testarCenarioSucesso();
    /// Testa um cenário em que a classe implementada deve levantar excessão.
    /// - Caso não seja levantada alguma excessão o valor estado será mudado para FALHA.
    virtual void testarCenarioFalha();

public:
    /// Chama os métodos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padrão para codificação de teste unitário referente a classe Classe.
class TesteUnitarioClasse: public TesteUnitario{
private:
    const static string NOME_CLASSE_VALIDO;
    const static string NOME_CLASSE_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    Classe *classe;

    /// Instancia a classe Classe e atribue SUCESSO a variável de estado.
    //Declaração de métodos
    void setUp();
    /// Chama o método destrutor da instancia de Classe.
    void tearDown();
    /// \brief Testa um cenário em que a classe implementada não deve levantar excessão.
    /// - Caso seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioSucesso();
    /// \brief Testa um cenário em que a classe implementada deve levantar excessão.
    /// - Caso não seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os métodos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padrão para codificação de teste unitário referente a classe CodigoAgencia.
class TesteUnitarioCodigoAgencia: public TesteUnitario{
private:
    const static string CODIGO_AGENCIA_VALIDO;
    const static string CODIGO_AGENCIA_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    CodigoAgencia *codigoAgencia;

    /// Instancia a classe CodigoAgencia e atribue SUCESSO a variável de estado.
    //Declaração de métodos
    void setUp();
    /// Chama o método destrutor da instancia de CodigoAgencia.
    void tearDown();
    /// Testa um cenário em que a classe implementada não deve levantar excessão.
    /// - Caso seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cenário em que a classe implementada deve levantar excessão.
    /// - Caso não seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os métodos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padrão para codificação de teste unitário referente a classe CodigoAplicacao.
class TesteUnitarioCodigoAplicacao: public TesteUnitario{
private:
    const static string CODIGO_APLICACAO_VALIDO;
    const static string CODIGO_APLICACAO_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    CodigoAplicacao *codigoAplicacao;

    /// Instancia a classe CodigoAplicacao e atribue SUCESSO a variável de estado.
    //Declaração de métodos
    void setUp();
    /// Chama o método destrutor da instancia de CodigoAplicacao.
    void tearDown();
    /// Testa um cenário em que a classe implementada não deve levantar excessão.
    /// - Caso seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cenário em que a classe implementada deve levantar excessão.
    /// - Caso não seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os métodos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padrão para codificação de teste unitário referente a classe CodigoBanco.
class TesteUnitarioCodigoBanco: public TesteUnitario{
private:
    const static string CODIGO_BANCO_VALIDO;
    const static string CODIGO_BANCO_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    CodigoBanco *codigoBanco;

    /// Instancia a classe CodigoBanco e atribue SUCESSO a variável de estado.
    //Declaração de métodos
    void setUp();
    /// Chama o método destrutor da instancia de CodigoBanco.
    void tearDown();
    /// Testa um cenário em que a classe implementada não deve levantar excessão.
    /// - Caso seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cenário em que a classe implementada deve levantar excessão.
    /// - Caso não seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os métodos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padrão para codificação de teste unitário referente a classe CodigoProduto.
class TesteUnitarioCodigoProduto: public TesteUnitario{
private:
    const static string CODIGO_PRODUTO_VALIDO;
    const static string CODIGO_PRODUTO_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    CodigoProduto *codigoProduto;

    /// Instancia a classe CodigoProduto e atribue SUCESSO a variável de estado.
    //Declaração de métodos
    void setUp();
    /// Chama o método destrutor da instancia de CodigoProduto.
    void tearDown();
    /// Testa um cenário em que a classe implementada não deve levantar excessão.
    /// - Caso seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cenário em que a classe implementada deve levantar excessão.
    /// - Caso não seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os métodos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padrão para codificação de teste unitário referente a classe Cpf.
class TesteUnitarioCpf: public TesteUnitario{
private:
    const static string NUMERO_CPF_VALIDO;
    const static string NUMERO_CPF_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    Cpf *cpf;

    /// Instancia a classe Cpf e atribue SUCESSO a variável de estado.
    //Declaração de métodos
    void setUp();
    /// Chama o método destrutor da instancia de Cpf.
    void tearDown();
    /// Testa um cenário em que a classe implementada não deve levantar excessão.
    /// - Caso seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cenário em que a classe implementada deve levantar excessão.
    /// - Caso não seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os métodos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padrão para codificação de teste unitário referente a classe Data.
class TesteUnitarioData: public TesteUnitario{
private:
    const static string NUMERO_DATA_VALIDO;
    const static string NUMERO_DATA_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    Data *data;

    /// Instancia a classe Data e atribue SUCESSO a variável de estado.
    //Declaração de métodos
    void setUp();
    /// Chama o método destrutor da instancia de Data.
    void tearDown();
    /// Testa um cenário em que a classe implementada não deve levantar excessão.
    /// - Caso seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cenário em que a classe implementada deve levantar excessão.
    /// - Caso não seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os métodos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};

/// Padrão para codificação de teste unitário referente a classe Emissor.
class TesteUnitarioEmissor: public TesteUnitario{
private:
    const static string NOME_EMISSOR_VALIDO;
    const static string NOME_EMISSOR_INVALIDO;

    // Ponteiro para o Classe classe que será criado
    Emissor *emissor;

    /// Instancia a classe Emissor e atribue SUCESSO a variável de estado.
    //Declaração de métodos
    void setUp();
    /// Chama o método destrutor da instancia de Emissor.
    void tearDown();
    /// Testa um cenário em que a classe implementada não deve levantar excessão.
    /// - Caso seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioSucesso();
    /// Testa um cenário em que a classe implementada deve levantar excessão.
    /// - Caso não seja levantada alguma excessão o valor estado será mudado para FALHA.
    void testarCenarioFalha();

public:
    /// Chama os métodos setUp, testarCenarioSucesso e testarCenarioFalha, tearDown.
    int run();
};


class TesteUnitarioEndereco: public TesteUnitario{
private:
    const static string ENDERECO_VALIDO;
    const static string ENDERECO_INVALIDO;

    // Ponteiro para a Classe Endereço que será criado
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

    // Ponteiro para a Classe Horário que será criado
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

    // Ponteiro para a Classe Número que será criado
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

    // Ponteiro para a Classe Valor Aplicaçao que será criado
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
