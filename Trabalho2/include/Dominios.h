#ifndef DOMINIOS_H
#define DOMINIOS_H
#include <string>

using std::string;


/// Padrão para codificação de ceps.
class Cep{
private:
    const static int QUANTIDADE_CEPS_DEFAULT = 0;
    static int minMaxCepsPossiveis[6][2];
    static string locaisCepsPossiveis[7];
    int numeroCep;
    string localCep;
    static int quantidadeCeps;
    void validarNumeroCep(int);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Cep.
    Cep();
    /// \brief Define o número de cep como o parâmetro recebido caso seja possível.
    /// \param Número do cep que se deseja criar (apenas números).
    ///
    /// Regras de formato:
    /// - Argumento válido caso esteja no faixas válidas para as cidades de São Paulo, Rio de Janeiro, Brasília,
    /// Salvador e Fortaleza.
    /// \throw Argumento Inválido
    void set(int);
//    void setLocalCep(string);
    /// \brief Retorna o cpf cadastrado, caso o mesmo tenha sido cadastrado.
    /// \return Número de cep cadastrado.
    int get();
//    string getLocalCep();
    /// \brief Retorna a quantidade de instâncias da classe Cep criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe Cep.
    static int getQuantidadeCeps();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Cep.
    virtual ~Cep();
};

inline int Cep::get(){
    return numeroCep;
}

//inline string Cep::getLocalCep(){
//    return localCep;
//}

inline int Cep::getQuantidadeCeps(){
    return quantidadeCeps;
}

/// Padrão para codificação de classes de ativos.
class Classe{
private:
    const static int QUANTIDADE_CLASSES_DEFAULT = 0;
    static string classesPossiveis;
    string nomeClasse;
    static int quantidadeClasses;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Classe.
    Classe();
    /// \brief Define o nome da classe de ativo como o parametro recebido caso seja possível.
    /// \param Nome da classe de ativo que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja: "CDB", "LCA", "LCI", "LF" ou "LC".
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o nome da classe de ativo cadastrado, caso o mesmo tenha sido cadastrado.
    /// \return Nome da classe cadastrada.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe Classe criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe Classe.
    static int getQuantidadeClasses();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Classe.
    virtual ~Classe();
};

inline string Classe::get(){
    return nomeClasse;
}

inline int Classe::getQuantidadeClasses(){
    return quantidadeClasses;
}

/// Padrão para codificação de códigos de agências.
class CodigoAgencia{
private:
    const static int QUANTIDADE_AGENCIAS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_CODIGO_AGENCIA = 4;
    const static string NUMERO_AGENCIA_INVALIDO;
    static string agenciaNaoPossivel;
    string numeroAgencia;
    static int quantidadeAgencias;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe CodigoAgencia.
    CodigoAgencia();
    /// \brief Define o código da agência como o parametro recebido caso seja possível.
    /// \param Código da agência que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja no formato XXXXX, com X sendo valores numéricos e o código não tendo todos os valores iguais a zero.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o código da agência, caso o mesmo tenha sido cadastrado.
    /// \return código da agência cadastrada.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe CodigoAgencia criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe CodigoAgencia.
    static int getQuantidadeAgencias();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe CodigoAgencia.
    virtual ~CodigoAgencia();
};

inline string CodigoAgencia::get(){
    return numeroAgencia;
}

inline int CodigoAgencia::getQuantidadeAgencias(){
    return quantidadeAgencias;
}

/// Padrão para codificação de códigos de aplicação.
class CodigoAplicacao{
private:
    const static int QUANTIDADE_APLICACOES_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_CODIGO_APLICACAO = 5;
    const static string NUMERO_APLICACAO_INVALIDO;
    string numeroAplicacao;
    static int quantidadeAplicacoes;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe CodigoAplicacao.
    CodigoAplicacao();
    /// \brief Define o código de aplicação como o parametro recebido caso seja possível.
    /// \param Código de aplicação que se deseja realizar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja no formato XXXXXX, com X sendo valores numéricos e o código não tendo todos os valores iguais a zero.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o código da aplicação, caso o mesmo tenha sido cadastrado.
    /// \return código da aplicação realizada.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe CodigoAplicacao criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe CodigoAplicacao.
    static int getQuantidadeAplicacoes();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe CodigoAplicacao.
    virtual ~CodigoAplicacao();
};

inline string CodigoAplicacao::get(){
    return numeroAplicacao;
}

inline int CodigoAplicacao::getQuantidadeAplicacoes(){
    return quantidadeAplicacoes;
}

/// Padrão para codificação de códigos de bancos.
class CodigoBanco{
private:
    const static int QUANTIDADE_BANCOS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_CODIGO_BANCO = 3;
    static string codigosBancosPossiveis[5][2];
    string numeroBanco;
    static int quantidadeCodigosBancos;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe CodigoBanco.
    CodigoBanco();
    /// \brief Define o código do Banco como o parametro recebido caso seja possível.
    /// \param Código do banco que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja no formato XXX, com X sendo valores numéricos com o código sendo considerado válido caso
    /// seja algum dos 5 códigos do maiores bancos brasileiros por ativos totais
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o código do banco, caso o mesmo tenha sido cadastrado.
    /// \return código do banco cadastrado.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe CodigoBanco criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe CodigoBanco.
    static int getQuantidadeCodigosBancos();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe CodigoBanco.
    virtual ~CodigoBanco();
};

inline string CodigoBanco::get(){
    return numeroBanco;
}

inline int CodigoBanco::getQuantidadeCodigosBancos(){
    return quantidadeCodigosBancos;
}

/// Padrão para codificação de códigos de produtos.
class CodigoProduto{
private:
    const static int QUANTIDADE_CODIGOS_PRODUTOS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_CODIGO_PRODUTO = 3;
    const static string NUMERO_PRODUTO_INVALIDO;
    static string codigoProdutoNaoPossivel;
    string numeroCodigoProduto;
    static int quantidadeCodigosProdutos;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe CodigoProduto.
    CodigoProduto();
    /// \brief Define o código do produto como o parametro recebido caso seja possível.
    /// \param Código do produto que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja no formato XXX, com X sendo valores numéricos e o código não tendo todos os valores iguais a zero.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o código do produto, caso o mesmo tenha sido cadastrado.
    /// \return código do produto cadastrada.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe CodigoProduto criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe CodigoProduto.
    static int getQuantidadeCodigosProdutos();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe CodigoProduto.
    virtual ~CodigoProduto();
};

inline string CodigoProduto::get(){
    return numeroCodigoProduto;
}

inline int CodigoProduto::getQuantidadeCodigosProdutos(){
    return quantidadeCodigosProdutos;
}

/// Padrão para codificação de cpfs.
class Cpf{
private:
    const static int QUANTIDADE_CPFS_DEFAULT = 0;
    const static string REPRESENTACAO_NUMERO;
    const static string FORMATO_STRING_VALIDO;
    const static int POSICAO_PRIMEIRO_DIGITO_VERIFICADOR;
    const static int POSICAO_SEGUNDO_DIGITO_VERIFICADOR;
    string numeroCpf;
    static int quantidadeCPFs;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Cpf.
    Cpf();
    /// \brief Define o código do CPF como o parametro recebido caso seja possível.
    /// \param Código do cpf que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja no formato XXX.XXX.XXX-XX, com X sendo valores numéricos e os números atendendo
    /// algoritmo de validação de cpf exemplificado em <a href="https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/">link</a>.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o número do cpf, caso o mesmo tenha sido cadastrado.
    /// \return número cpf.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe Cpf criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe Cpf.
    static int getQuantidadeCPFs();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Cpf.
    virtual ~Cpf();
};

inline string Cpf::get(){
    return numeroCpf;
}

inline int Cpf::getQuantidadeCPFs(){
    return quantidadeCPFs;
}

/// Padrão para codificação de datas.
class Data{
private:
    const static int QUANTIDADE_DATAS_DEFAULT = 0;
    const static string REPRESENTACAO_NUMERO;
    const static string FORMATO_STRING_VALIDO;
    static int minMaxDiasPossiveisAnosNaoBissextos[2];
    static int minMaxDiasPossiveisAnosBissextos[2];
    static int minMaxMesesPossiveis[2];
    static int minMaxAnosPossiveis[2];
    static int anosBissextos[20];
    string numeroData;
    static int quantidadeDatas;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Data.
    Data();
    /// \brief Define uma data como o parametro recebido caso seja possível.
    /// \param Data.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja no formato DD/MM/AAAA, com DD representando o dia de 1 a 31,
    /// MM representando o mês de 1 12 e AAAA o ano de 2020 a 2099.
    /// Caso sejam inseridas datas referentes a anos bissextos não será levantada excessão.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna a data, caso o mesmo tenha sido cadastrado.
    /// \return data cadastrada.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe Data criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe Data.
    static int getQuantidadeDatas();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Data.
    virtual ~Data();
};

inline string Data::get(){
    return numeroData;
}

inline int Data::getQuantidadeDatas(){
    return quantidadeDatas;
}

/// Padrão para codificação de usuários emissores.
class Emissor{
private:
    const static int QUANTIDADE_EMISSORES_DEFAULT = 0;
    static int minMaxCaracteresPossiveis[2];
    static char caracteresEspeciaisPossiveis[3];
    string nomeEmissor;
    static int quantidadeEmissores;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Emissor.
    Emissor();
    /// \brief Define o nome do emissor como o parametro recebido caso seja possível.
    /// \param Nome do emissor que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja um texto de 5 a 30 caracteres, caso o primeiro caractere seja letra ela deverá
    /// maiúscula. Caracteres especiais sendo permitidos, sendo que apenas: '-', '.' e ' '(espaço em branco).
    /// Ressalta-se que os caracteres especiais não podem estar em sequência, apenas os alfanuméricos.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o nome do emissor, caso o mesmo tenha sido cadastrado.
    /// \return nome do emissor cadastrada.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe Emissor criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe Emissor.
    static int getQuantidadeEmissores();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Emissor.
    virtual ~Emissor();
};

inline string Emissor::get(){
    return nomeEmissor;
}

inline int Emissor::getQuantidadeEmissores(){
    return quantidadeEmissores;
}

/// Padrão para codificação de endereços.
class Endereco{
private:
    const static int QUANTIDADE_ENDERECOS_DEFAULT = 0;
    static int minCaracteresPossiveis;
    static int maxCaracteresPossiveis;
    string enderecoCompleto;
    static int quantidadeEnderecos;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Endereco.
    Endereco();
    /// \brief Define endereço completo como o parametro recebido caso seja possível.
    /// \param Endereço completo que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja um texto de 5 a 20 caracteres, caso o primeiro caractere seja letra ela deverá
    /// maiúscula. Caracteres especiais sendo permitidos, sendo que apenas: '.' e ' '(espaço em branco).
    /// Ressalta-se que os caracteres especiais não podem estar em sequência, apenas os alfanuméricos.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o endereço, caso o mesmo tenha sido cadastrado.
    /// \return endereço cadastrado.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe Endereco criadas até aquele presente momento.
    /// \return Quantidade de instâncias da classe Endereco.
    static int getQuantidadeEnderecos();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Endereco.
    virtual ~Endereco();
};

inline string Endereco::get(){
    return enderecoCompleto;
}

inline int Endereco::getQuantidadeEnderecos(){
    return quantidadeEnderecos;
}

/// Padrão para codificação de horários.
class Horario{
private:
    const static int QUANTIDADE_HORARIOS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_HORARIO = 5;
    string valorHorario;
    static int quantidadeHorarios;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Horario.
    Horario();
    /// \brief Define o horário como o parametro recebido caso seja possível.
    /// \param Horario que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja no formato XY:ZW, representando um horário entre 13:00 e 17:00.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o horário, caso o mesmo tenha sido cadastrado.
    /// \return horário cadastrado.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe Horario criadas até aquele presente momento.
    /// \return Quantidade de instâncias da classe Horario.
    static int qetQuantidadeHorarios();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Horario.
    virtual ~Horario();
};

inline string Horario::get(){
    return valorHorario;
}

inline int Horario::qetQuantidadeHorarios(){
    return quantidadeHorarios;
}

/// Padrão para codificação de nomes.
class Nome{
private:
    const static int QUANTIDADE_NOMES_DEFAULT = 0;
    static int minCaracteresPossiveis;
    static int maxCaracteresPossiveis;
    string nomeCompleto;
    static int quantidadeNomes;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Nome.
    Nome();
    /// \brief Define nome completo como o parametro recebido caso seja possível.
    /// \param Nome completo que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja um texto de 5 a 30 caracteres, com pelo menos 5 letras e a primeira letra de cada
    /// termo deverá ser maiúscula. Caracter especial permitido: ' '(espaço em branco).
    /// Ressalta-se que o caracter especial não pode estar em sequência, apenas as letras.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o nome, caso o mesmo tenha sido cadastrado.
    /// \return nome cadastrado.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe Nome criadas até aquele presente momento.
    /// \return Quantidade de instâncias da classe Nome.
    static int getQuantidadeNomes();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Nome.
    virtual ~Nome();
};

inline string Nome::get(){
    return nomeCompleto;
}

inline int Nome::getQuantidadeNomes(){
    return quantidadeNomes;
}

/// Padrão para codificação de números de conta.
class Numero{
private:
    const static int QUANTIDADE_NUMEROS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_NUMERO = 8;
    static string digitosVerificadoresPossiveis[11];
    string numeroConta;
    static int quantidadeNumeros;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Numero.
    Numero();
    /// \brief Define o número como o parametro recebido caso seja possível.
    /// \param Numero que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja no formato XXXXXX-Y, onde X é dígito (0 - 9) e
    /// Y é dígito verificador calculado pelo algoritmo do Banco do Brasil, obtido em
    /// <a href="http://177.153.6.25/ercompany.com.br/boleto/laravel-boleto-master/manuais/Regras%20Validacao%20Conta%20Corrente%20VI_EPS.pdf">link</a>.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna o número, caso o mesmo tenha sido cadastrado.
    /// \return número cadastrado.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe Numero criadas até aquele presente momento.
    /// \return Quantidade de instâncias da classe Numero.
    static int getQuantidadeNumeros();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Numero.
    virtual ~Numero();
};

inline string Numero::get(){
    return numeroConta;
}

inline int Numero::getQuantidadeNumeros(){
    return quantidadeNumeros;
}

/// Padrão para codificação de prazos.
class Prazo{
private:
    const static int QUANTIDADE_PRAZOS_DEFAULT = 0;
    static int prazosPossiveis[12];
    int valorPrazo;
    static int quantidadePrazos;
    void validar(int);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Prazo.
    Prazo();
    /// \brief Define o prazo como o parâmetro recebido caso seja possível.
    /// \param Prazo que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja um valor igual a 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72.
    /// \throw Argumento Inválido
    void set(int);
    /// \brief Retorna o prazo, caso o mesmo tenha sido cadastrado.
    /// \return prazo cadastrado.
    int get();
    /// \brief Retorna a quantidade de instâncias da classe Prazo criadas até aquele presente momento.
    /// \return Quantidade de instâncias da classe Prazo.
    static int getQuantidadePrazos();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Prazo.
    virtual ~Prazo();
};

inline int Prazo::get(){
    return valorPrazo;
}

inline int Prazo::getQuantidadePrazos(){
    return quantidadePrazos;
}

/// Padrão para codificação de senhas.
class Senha{
private:
    const static int QUANTIDADE_SENHAS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_SENHA = 6;
    string numeroSenha;
    static int quantidadeSenhas;
    void validar(string);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Senha.
    Senha();
    /// \brief Define a senha como o parametro recebido caso seja possível.
    /// \param Senha que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja no formato XXXXXX, onde X é dígito (0 - 9) e
    /// não existem dígitos repetidos.
    /// \throw Argumento Inválido
    void set(string);
    /// \brief Retorna a senha, caso a mesma tenha sido cadastrada.
    /// \return senha cadastrada.
    string get();
    /// \brief Retorna a quantidade de instâncias da classe Senha criadas até aquele presente momento.
    /// \return Quantidade de instâncias da classe Senha.
    static int getQuantidadeSenhas();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Senha.
    virtual ~Senha();
};

inline string Senha::get(){
    return numeroSenha;
}

inline int Senha::getQuantidadeSenhas(){
    return quantidadeSenhas;
}

/// Padrão para codificação de taxas.
class Taxa{
private:
    const static int QUANTIDADE_TAXAS_DEFAULT = 0;
    static int minTaxaPossivel;
    static int maxTaxaPossivel;
    int valorTaxa;
    static int quantidadeTaxas;
    void validar(int);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Taxa.
    Taxa();
    /// \brief Define a taxa como o parâmetro recebido caso seja possível.
    /// \param Taxa que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja valor entre 0 e 200.
    /// \throw Argumento Inválido
    void set(int);
    /// \brief Retorna a taxa, caso a mesma tenha sido cadastrada.
    /// \return taxa cadastrada.
    int get();
    /// \brief Retorna a quantidade de instâncias da classe Taxa criadas até aquele presente momento.
    /// \return Quantidade de instâncias da classe Taxa.
    static int getQuantidadeTaxas();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Taxa.
    virtual ~Taxa();
};

inline int Taxa::get(){
    return valorTaxa;
}

inline int Taxa::getQuantidadeTaxas(){
    return quantidadeTaxas;
}

/// Padrão para codificação de valores de aplicação.
class ValorDeAplicacao{
private:
    const static int QUANTIDADE_VALORES_APLICACAO_DEFAULT = 0;
    static int minValorAplicacaoPossivel;
    static int maxValorAplicacaoPossivel;
    int valorAplicacao;
    static int quantidadeValoresAplicacao;
    void validar(int);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe ValorDeAplicacao.
    ValorDeAplicacao();
    /// \brief Define o valor de aplicação como o parâmetro recebido caso seja possível.
    /// \param Valor de aplicação que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja um valor entre 0 e 1.000.000.
    /// \throw Argumento Inválido
    void set(int);
    /// \brief Retorna o valor de aplicação, caso o mesmo tenha sido cadastrado.
    /// \return valor de aplicação cadastrado.
    int get();
    /// \brief Retorna a quantidade de instâncias da classe ValorDeAplicacao criadas até aquele presente momento.
    /// \return Quantidade de instâncias da classe ValorDeAplicacao.
    static int getQuantidadeValoresDeAplicacao();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe ValorDeAplicacao.
    virtual ~ValorDeAplicacao();
};

inline int ValorDeAplicacao::get(){
    return valorAplicacao;
}

inline int ValorDeAplicacao::getQuantidadeValoresDeAplicacao(){
    return quantidadeValoresAplicacao;
}

/// Padrão para codificação de valores mínimos.
class ValorMinimo{
private:
    const static int QUANTIDADE_VALORES_MINIMOS_DEFAULT = 0;
    static int valoresMinimosPossiveis[4];
    int valorMin;
    static int quantidadeValoresMinimos;
    void validar(int);
public:
    /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe ValorMinimo.
    ValorMinimo();
    /// \brief Define o valor mínimo como o parâmetro recebido caso seja possível.
    /// \param Valor mínimo que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento válido caso seja um valor igual a 1.000, 5.000, 10.000 ou 50.000.
    /// \throw Argumento Inválido
    void set(int);
    /// \brief Retorna o valor mínimo, caso o mesmo tenha sido cadastrado.
    /// \return valor mínimo cadastrado.
    int get();
    /// \brief Retorna a quantidade de instâncias da classe ValorMinimo criadas até aquele presente momento.
    /// \return Quantidade de instâncias da classe ValorMinimo.
    static int getQuantidadeValoresMinimos();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe ValorMinimo.
    virtual ~ValorMinimo();
};

inline int ValorMinimo::get(){
    return valorMin;
}

inline int ValorMinimo::getQuantidadeValoresMinimos(){
    return quantidadeValoresMinimos;
}

#endif // DOMINIOS_H
