#ifndef DOMINIOS_H
#define DOMINIOS_H
#include <string>

using std::string;


/// Padr�o para codifica��o de ceps.
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
    /// \brief Incrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe Cep.
    Cep();
    /// \brief Define o n�mero de cep como o par�metro recebido caso seja poss�vel.
    /// \param N�mero do cep que se deseja criar (apenas n�meros).
    ///
    /// Regras de formato:
    /// - Argumento v�lido caso esteja no faixas v�lidas para as cidades de S�o Paulo, Rio de Janeiro, Bras�lia,
    /// Salvador e Fortaleza.
    /// \throw Argumento Inv�lido
    void set(int);
//    void setLocalCep(string);
    /// \brief Retorna o cpf cadastrado, caso o mesmo tenha sido cadastrado.
    /// \return N�mero de cep cadastrado.
    int get();
//    string getLocalCep();
    /// \brief Retorna a quantidade de inst�ncias da classe Cep criadas at� o aquele presente momento.
    /// \return Quantidade de inst�ncias da classe Cep.
    static int getQuantidadeInstancias();
    /// \brief Decrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe Cep.
    virtual ~Cep();
};

inline int Cep::get(){
    return numeroCep;
}

//inline string Cep::getLocalCep(){
//    return localCep;
//}

inline int Cep::getQuantidadeInstancias(){
    return quantidadeCeps;
}

/// Padr�o para codifica��o de classes de ativos.
class Classe{
private:
    const static int QUANTIDADE_CLASSES_DEFAULT = 0;
    static string classesPossiveis;
    string nomeClasse;
    static int quantidadeClasses;
    void validar(string);
public:
    /// \brief Incrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe Classe.
    Classe();
    /// \brief Define o nome da classe de ativo como o parametro recebido caso seja poss�vel.
    /// \param Nome da classe de ativo que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento v�lido caso seja: "CDB", "LCA", "LCI", "LF" ou "LC".
    /// \throw Argumento Inv�lido
    void set(string);
    /// \brief Retorna o nome da classe de ativo cadastrado, caso o mesmo tenha sido cadastrado.
    /// \return Nome da classe cadastrada.
    string get();
    /// \brief Retorna a quantidade de inst�ncias da classe Classe criadas at� o aquele presente momento.
    /// \return Quantidade de inst�ncias da classe Classe.
    static int getQuantidadeInstancias();
    /// \brief Decrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe Classe.
    virtual ~Classe();
};

inline string Classe::get(){
    return nomeClasse;
}

inline int Classe::getQuantidadeInstancias(){
    return quantidadeClasses;
}

/// Padr�o para codifica��o de c�digos de ag�ncias.
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
    /// \brief Incrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe CodigoAgencia.
    CodigoAgencia();
    /// \brief Define o c�digo da ag�ncia como o parametro recebido caso seja poss�vel.
    /// \param C�digo da ag�ncia que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento v�lido caso seja no formato XXXXX, com X sendo valores num�ricos e o c�digo n�o tendo todos os valores iguais a zero.
    /// \throw Argumento Inv�lido
    void set(string);
    /// \brief Retorna o c�digo da ag�ncia, caso o mesmo tenha sido cadastrado.
    /// \return c�digo da ag�ncia cadastrada.
    string get();
    /// \brief Retorna a quantidade de inst�ncias da classe CodigoAgencia criadas at� o aquele presente momento.
    /// \return Quantidade de inst�ncias da classe CodigoAgencia.
    static int getQuantidadeInstancias();
    /// \brief Decrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe CodigoAgencia.
    virtual ~CodigoAgencia();
};

inline string CodigoAgencia::get(){
    return numeroAgencia;
}

inline int CodigoAgencia::getQuantidadeInstancias(){
    return quantidadeAgencias;
}

/// Padr�o para codifica��o de c�digos de aplica��o.
class CodigoAplicacao{
private:
    const static int QUANTIDADE_APLICACOES_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_CODIGO_APLICACAO = 5;
    const static string NUMERO_APLICACAO_INVALIDO;
    string numeroAplicacao;
    static int quantidadeAplicacoes;
    void validar(string);
public:
    /// \brief Incrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe CodigoAplicacao.
    CodigoAplicacao();
    /// \brief Define o c�digo de aplica��o como o parametro recebido caso seja poss�vel.
    /// \param C�digo de aplica��o que se deseja realizar.
    ///
    /// Regras de formato:
    /// - Argumento v�lido caso seja no formato XXXXXX, com X sendo valores num�ricos e o c�digo n�o tendo todos os valores iguais a zero.
    /// \throw Argumento Inv�lido
    void set(string);
    /// \brief Retorna o c�digo da aplica��o, caso o mesmo tenha sido cadastrado.
    /// \return c�digo da aplica��o realizada.
    string get();
    /// \brief Retorna a quantidade de inst�ncias da classe CodigoAplicacao criadas at� o aquele presente momento.
    /// \return Quantidade de inst�ncias da classe CodigoAplicacao.
    static int getQuantidadeInstancias();
    /// \brief Decrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe CodigoAplicacao.
    virtual ~CodigoAplicacao();
};

inline string CodigoAplicacao::get(){
    return numeroAplicacao;
}

inline int CodigoAplicacao::getQuantidadeInstancias(){
    return quantidadeAplicacoes;
}

/// Padr�o para codifica��o de c�digos de bancos.
class CodigoBanco{
private:
    const static int QUANTIDADE_BANCOS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_CODIGO_BANCO = 3;
    static string codigosBancosPossiveis[5][2];
    string numeroBanco;
    static int quantidadeCodigosBancos;
    void validar(string);
public:
    /// \brief Incrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe CodigoBanco.
    CodigoBanco();
    /// \brief Define o c�digo do Banco como o parametro recebido caso seja poss�vel.
    /// \param C�digo do banco que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento v�lido caso seja no formato XXX, com X sendo valores num�ricos com o c�digo sendo considerado v�lido caso
    /// seja algum dos 5 c�digos do maiores bancos brasileiros por ativos totais
    /// \throw Argumento Inv�lido
    void set(string);
    /// \brief Retorna o c�digo do banco, caso o mesmo tenha sido cadastrado.
    /// \return c�digo do banco cadastrado.
    string get();
    /// \brief Retorna a quantidade de inst�ncias da classe CodigoBanco criadas at� o aquele presente momento.
    /// \return Quantidade de inst�ncias da classe CodigoBanco.
    static int getQuantidadeInstancias();
    /// \brief Decrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe CodigoBanco.
    virtual ~CodigoBanco();
};

inline string CodigoBanco::get(){
    return numeroBanco;
}

inline int CodigoBanco::getQuantidadeInstancias(){
    return quantidadeCodigosBancos;
}

/// Padr�o para codifica��o de c�digos de produtos.
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
    /// \brief Incrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe CodigoProduto.
    CodigoProduto();
    /// \brief Define o c�digo do produto como o parametro recebido caso seja poss�vel.
    /// \param C�digo do produto que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento v�lido caso seja no formato XXX, com X sendo valores num�ricos e o c�digo n�o tendo todos os valores iguais a zero.
    /// \throw Argumento Inv�lido
    void set(string);
    /// \brief Retorna o c�digo do produto, caso o mesmo tenha sido cadastrado.
    /// \return c�digo do produto cadastrada.
    string get();
    /// \brief Retorna a quantidade de inst�ncias da classe CodigoProduto criadas at� o aquele presente momento.
    /// \return Quantidade de inst�ncias da classe CodigoProduto.
    static int getQuantidadeInstancias();
    /// \brief Decrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe CodigoProduto.
    virtual ~CodigoProduto();
};

inline string CodigoProduto::get(){
    return numeroCodigoProduto;
}

inline int CodigoProduto::getQuantidadeInstancias(){
    return quantidadeCodigosProdutos;
}

/// Padr�o para codifica��o de cpfs.
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
    /// \brief Incrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe Cpf.
    Cpf();
    /// \brief Define o c�digo do CPF como o parametro recebido caso seja poss�vel.
    /// \param C�digo do cpf que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento v�lido caso seja no formato XXX.XXX.XXX-XX, com X sendo valores num�ricos e os n�meros atendendo
    /// algoritmo de valida��o de cpf exemplificado em <a href="https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/">link</a>.
    /// \throw Argumento Inv�lido
    void set(string);
    /// \brief Retorna o n�mero do cpf, caso o mesmo tenha sido cadastrado.
    /// \return n�mero cpf.
    string get();
    /// \brief Retorna a quantidade de inst�ncias da classe Cpf criadas at� o aquele presente momento.
    /// \return Quantidade de inst�ncias da classe Cpf.
    static int getQuantidadeInstancias();
    /// \brief Decrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe Cpf.
    virtual ~Cpf();
};

inline string Cpf::get(){
    return numeroCpf;
}

inline int Cpf::getQuantidadeInstancias(){
    return quantidadeCPFs;
}

/// Padr�o para codifica��o de datas.
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
    /// \brief Incrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe Data.
    Data();
    /// \brief Define uma data como o parametro recebido caso seja poss�vel.
    /// \param Data.
    ///
    /// Regras de formato:
    /// - Argumento v�lido caso seja no formato DD/MM/AAAA, com DD representando o dia de 1 a 31,
    /// MM representando o m�s de 1 12 e AAAA o ano de 2020 a 2099.
    /// Caso sejam inseridas datas referentes a anos bissextos n�o ser� levantada excess�o.
    /// \throw Argumento Inv�lido
    void set(string);
    /// \brief Retorna a data, caso o mesmo tenha sido cadastrado.
    /// \return data cadastrada.
    string get();
    /// \brief Retorna a quantidade de inst�ncias da classe Data criadas at� o aquele presente momento.
    /// \return Quantidade de inst�ncias da classe Data.
    static int getQuantidadeInstancias();
    /// \brief Decrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe Data.
    virtual ~Data();
};

inline string Data::get(){
    return numeroData;
}

inline int Data::getQuantidadeInstancias(){
    return quantidadeDatas;
}

/// Padr�o para codifica��o de usu�rios emissores.
class Emissor{
private:
    const static int QUANTIDADE_EMISSORES_DEFAULT = 0;
    static int minMaxCaracteresPossiveis[2];
    static char caracteresEspeciaisPossiveis[3];
    string nomeEmissor;
    static int quantidadeEmissores;
    void validar(string);
public:
    /// \brief Incrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe Emissor.
    Emissor();
    /// \brief Define o nome do emissor como o parametro recebido caso seja poss�vel.
    /// \param Nome do emissor que se deseja criar.
    ///
    /// Regras de formato:
    /// - Argumento v�lido caso seja um texto de 5 a 30 caracteres, caso o primeiro caractere seja letra ela dever�
    /// mai�scula. Caracteres especiais sendo permitidos, sendo que apenas: '-', '.' e ' '(espa�o em branco).
    /// Ressalta-se que os caracteres especiais n�o podem estar em sequ�ncia, apenas os alfanum�ricos.
    /// \throw Argumento Inv�lido
    void set(string);
    /// \brief Retorna o nome do emissor, caso o mesmo tenha sido cadastrado.
    /// \return nome do emissor cadastrada.
    string get();
    /// \brief Retorna a quantidade de inst�ncias da classe Emissor criadas at� o aquele presente momento.
    /// \return Quantidade de inst�ncias da classe Emissor.
    static int getQuantidadeInstancias();
    /// \brief Decrementa a vari�vel respons�vel por armazenar o n�mero de instancias da classe Emissor.
    virtual ~Emissor();
};

inline string Emissor::get(){
    return nomeEmissor;
}

inline int Emissor::getQuantidadeInstancias(){
    return quantidadeEmissores;
}


class Endereco{
private:
    const static int QUANTIDADE_ENDERECOS_DEFAULT = 0;
    static int minCaracteresPossiveis;
    static int maxCaracteresPossiveis;
    string enderecoCompleto;
    static int quantidadeEnderecos;
    void validar(string);
public:
    Endereco();
    void set(string);
    string get();
    static int getQuantidadeInstancias();
    virtual ~Endereco();
};

inline string Endereco::get(){
    return enderecoCompleto;
}

inline int Endereco::getQuantidadeInstancias(){
    return quantidadeEnderecos;
}

class Horario{
private:
    const static int QUANTIDADE_HORARIOS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_HORARIO = 5;
    string valorHorario;
    static int quantidadeHorarios;
    void validar(string);
public:
    Horario();
    void set(string);
    string get();
    static int getQuantidadeInstancias();
    virtual ~Horario();
};

inline string Horario::get(){
    return valorHorario;
}

inline int Horario::getQuantidadeInstancias(){
    return quantidadeHorarios;
}

class Nome{
private:
    const static int QUANTIDADE_NOMES_DEFAULT = 0;
    static int minCaracteresPossiveis;
    static int maxCaracteresPossiveis;
    string nomeCompleto;
    static int quantidadeNomes;
    void validar(string);
public:
    Nome();
    void set(string);
    string get();
    static int getQuantidadeInstancias();
    virtual ~Nome();
};

inline string Nome::get(){
    return nomeCompleto;
}

inline int Nome::getQuantidadeInstancias(){
    return quantidadeNomes;
}

class Numero{
private:
    const static int QUANTIDADE_NUMEROS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_NUMERO = 8;
    static string digitosVerificadoresPossiveis[11];
    const static int QUANTIDADE_CPFS_DEFAULT = 0;
    const static string REPRESENTACAO_NUMERO;
    const static string FORMATO_STRING_VALIDO;
    const static int POSICAO_PRIMEIRO_DIGITO_VERIFICADOR;
    const static int POSICAO_SEGUNDO_DIGITO_VERIFICADOR;
    string numeroCpf;
    string numeroConta;
    static int quantidadeNumeros;
    void validar(string);
public:
    Numero();
    void set(string);
    string get();
    static int getQuantidadeInstancias();
    virtual ~Numero();
};

inline string Numero::get(){
    return numeroConta;
}

inline int Numero::getQuantidadeInstancias(){
    return quantidadeNumeros;
}

class Prazo{
private:
    const static int QUANTIDADE_PRAZOS_DEFAULT = 0;
    static int prazosPossiveis[12];
    int valorPrazo;
    static int quantidadePrazos;
    void validar(int);
public:
    Prazo();
    void set(int);
    int get();
    static int getQuantidadeInstancias();
    virtual ~Prazo();
};

inline int Prazo::get(){
    return valorPrazo;
}

inline int Prazo::getQuantidadeInstancias(){
    return quantidadePrazos;
}

class Senha{
private:
    const static int QUANTIDADE_SENHAS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_SENHA = 6;
    string numeroSenha;
    static int quantidadeSenhas;
    void validar(string);
public:
    Senha();
    void set(string);
    string get();
    static int getQuantidadeInstancias();
    virtual ~Senha();
};

inline string Senha::get(){
    return numeroSenha;
}

inline int Senha::getQuantidadeInstancias(){
    return quantidadeSenhas;
}

class Taxa{
private:
    const static int QUANTIDADE_TAXAS_DEFAULT = 0;
    static int minTaxaPossivel;
    static int maxTaxaPossivel;
    int valorTaxa;
    static int quantidadeTaxas;
    void validar(int);
public:
    Taxa();
    void set(int);
    int get();
    static int getQuantidadeInstancias();
    virtual ~Taxa();
};

inline int Taxa::get(){
    return valorTaxa;
}

inline int Taxa::getQuantidadeInstancias(){
    return quantidadeTaxas;
}

class ValorDeAplicacao{
private:
    const static int QUANTIDADE_VALORES_APLICACAO_DEFAULT = 0;
    static int minValorAplicacaoPossivel;
    static int maxValorAplicacaoPossivel;
    int valorAplicacao;
    static int quantidadeValoresAplicacao;
    void validar(int);
public:
    ValorDeAplicacao();
    void set(int);
    int get();
    static int getQuantidadeInstancias();
    virtual ~ValorDeAplicacao();
};

inline int ValorDeAplicacao::get(){
    return valorAplicacao;
}

inline int ValorDeAplicacao::getQuantidadeInstancias(){
    return quantidadeValoresAplicacao;
}

class ValorMinimo{
private:
    const static int QUANTIDADE_VALORES_MINIMOS_DEFAULT = 0;
    static int valoresMinimosPossiveis[4];
    int valorMin;
    static int quantidadeValoresMinimos;
    void validar(int);
public:
    ValorMinimo();
    void set(int);
    int get();
    static int getQuantidadeInstancias();
    virtual ~ValorMinimo();
};

inline int ValorMinimo::get(){
    return valorMin;
}

inline int ValorMinimo::getQuantidadeInstancias(){
    return quantidadeValoresMinimos;
}

#endif // DOMINIOS_H
