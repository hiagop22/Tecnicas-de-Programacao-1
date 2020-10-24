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
    void setCep(int);
//    void setLocalCep(string);
    /// \brief Retorna o cpf cadastrado, caso o mesmo tenha sido cadastrado.
    /// \return Número de cep cadastrado.
    int getCep();
//    string getLocalCep();
    /// \brief Retorna a quantidade de instâncias da classe Cep criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe Cep.
    static int getQuantidadeCeps();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Cep.
    virtual ~Cep();
};

inline int Cep::getCep(){
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
    void setClasse(string);
    /// \brief Retorna o nome da classe de ativo cadastrado, caso o mesmo tenha sido cadastrado.
    /// \return Nome da classe cadastrada.
    string getClasse();
    /// \brief Retorna a quantidade de instâncias da classe Classe criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe Classe.
    static int getQuantidadeClasses();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Classe.
    virtual ~Classe();
};

inline string Classe::getClasse(){
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
    void setCodigoAgencia(string);
    /// \brief Retorna o código da agência, caso o mesmo tenha sido cadastrado.
    /// \return código da agência cadastrada.
    string getCodigoAgencia();
    /// \brief Retorna a quantidade de instâncias da classe CodigoAgencia criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe CodigoAgencia.
    static int getQuantidadeAgencias();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe CodigoAgencia.
    virtual ~CodigoAgencia();
};

inline string CodigoAgencia::getCodigoAgencia(){
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
    void setCodigoAplicacao(string);
    /// \brief Retorna o código da aplicação, caso o mesmo tenha sido cadastrado.
    /// \return código da aplicação realizada.
    string getCodigoAplicacao();
    /// \brief Retorna a quantidade de instâncias da classe CodigoAplicacao criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe CodigoAplicacao.
    static int getQuantidadeAplicacoes();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe CodigoAplicacao.
    virtual ~CodigoAplicacao();
};

inline string CodigoAplicacao::getCodigoAplicacao(){
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
    void setCodigoBanco(string);
    /// \brief Retorna o código do banco, caso o mesmo tenha sido cadastrado.
    /// \return código do banco cadastrado.
    string getCodigoBanco();
    /// \brief Retorna a quantidade de instâncias da classe CodigoBanco criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe CodigoBanco.
    static int getQuantidadeCodigosBancos();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe CodigoBanco.
    virtual ~CodigoBanco();
};

inline string CodigoBanco::getCodigoBanco(){
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
    void setCodigoProduto(string);
    /// \brief Retorna o código do produto, caso o mesmo tenha sido cadastrado.
    /// \return código do produto cadastrada.
    string getCodigoProduto();
    /// \brief Retorna a quantidade de instâncias da classe CodigoProduto criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe CodigoProduto.
    static int getQuantidadeCodigosProdutos();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe CodigoProduto.
    virtual ~CodigoProduto();
};

inline string CodigoProduto::getCodigoProduto(){
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
    void setNumeroCpf(string);
    /// \brief Retorna o número do cpf, caso o mesmo tenha sido cadastrado.
    /// \return número cpf.
    string getNumeroCpf();
    /// \brief Retorna a quantidade de instâncias da classe Cpf criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe Cpf.
    static int getQuantidadeCPFs();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Cpf.
    virtual ~Cpf();
};

inline string Cpf::getNumeroCpf(){
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
    void setNumeroData(string);
    /// \brief Retorna a data, caso o mesmo tenha sido cadastrado.
    /// \return data cadastrada.
    string getNumeroData();
    /// \brief Retorna a quantidade de instâncias da classe Data criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe Data.
    static int getQuantidadeDatas();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Data.
    virtual ~Data();
};

inline string Data::getNumeroData(){
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
    void setNomeEmissor(string);
    /// \brief Retorna o nome do emissor, caso o mesmo tenha sido cadastrado.
    /// \return nome do emissor cadastrada.
    string getNomeEmissor();
    /// \brief Retorna a quantidade de instâncias da classe Emissor criadas até o aquele presente momento.
    /// \return Quantidade de instâncias da classe Emissor.
    static int getQuantidadeEmissores();
    /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Emissor.
    virtual ~Emissor();
};

inline string Emissor::getNomeEmissor(){
    return nomeEmissor;
}

inline int Emissor::getQuantidadeEmissores(){
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
    void setEndereco(string);
    string getEndereco();
    static int getQuantidadeEnderecos();
    virtual ~Endereco();
};

inline string Endereco::getEndereco(){
    return enderecoCompleto;
}

inline int Endereco::getQuantidadeEnderecos(){
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
    void setHorario(string);
    string getHorario();
    static int qetQuantidadeHorarios();
    virtual ~Horario();
};

inline string Horario::getHorario(){
    return valorHorario;
}

inline int Horario::qetQuantidadeHorarios(){
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
    void setNome(string);
    string getNome();
    static int getQuantidadeNomes();
    virtual ~Nome();
};

inline string Nome::getNome(){
    return nomeCompleto;
}

inline int Nome::getQuantidadeNomes(){
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
    void setNumero(string);
    string getNumero();
    static int getQuantidadeNumeros();
    virtual ~Numero();
};

inline string Numero::getNumero(){
    return numeroConta;
}

inline int Numero::getQuantidadeNumeros(){
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
    void setPrazo(int);
    int getPrazo();
    static int getQuantidadePrazos();
    virtual ~Prazo();
};

inline int Prazo::getPrazo(){
    return valorPrazo;
}

inline int Prazo::getQuantidadePrazos(){
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
    void setSenha(string);
    string getSenha();
    static int getQuantidadeSenhas();
    virtual ~Senha();
};

inline string Senha::getSenha(){
    return numeroSenha;
}

inline int Senha::getQuantidadeSenhas(){
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
    void setTaxa(int);
    int getTaxa();
    static int getQuantidadeTaxas();
    virtual ~Taxa();
};

inline int Taxa::getTaxa(){
    return valorTaxa;
}

inline int Taxa::getQuantidadeTaxas(){
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
    void setValorDeAplicacao(int);
    int getValorDeAplicacao();
    static int getQuantidadeValoresDeAplicacao();
    virtual ~ValorDeAplicacao();
};

inline int ValorDeAplicacao::getValorDeAplicacao(){
    return valorAplicacao;
}

inline int ValorDeAplicacao::getQuantidadeValoresDeAplicacao(){
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
    void setValorMinimo(int);
    int getValorMinimo();
    static int getQuantidadeValoresMinimos();
    virtual ~ValorMinimo();
};

inline int ValorMinimo::getValorMinimo(){
    return valorMin;
}

inline int ValorMinimo::getQuantidadeValoresMinimos(){
    return quantidadeValoresMinimos;
}

#endif // DOMINIOS_H
