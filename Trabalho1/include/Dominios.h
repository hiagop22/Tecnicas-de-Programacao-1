#ifndef DOMINIOS_H
#define DOMINIOS_H
#include <string>

using std::string;

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
    Cep();
    void setCep(int);
    void setLocalCep(string);
    int getCep();
    string getLocalCep();
    static int getQuantidadeCeps();
    virtual ~Cep();
};

inline int Cep::getCep(){
    return numeroCep;
}

inline string Cep::getLocalCep(){
    return localCep;
}

inline int Cep::getQuantidadeCeps(){
    return quantidadeCeps;
}

class Classe{
private:
    const static int QUANTIDADE_CLASSES_DEFAULT = 0;
    static string classesPossiveis;
    string nomeClasse;
    static int quantidadeClasses;
    void validar(string);
public:
    Classe();
    void setClasse(string);
    string getClasse();
    static int getQuantidadeClasses();
    virtual ~Classe();
};

inline string Classe::getClasse(){
    return nomeClasse;
}

inline int Classe::getQuantidadeClasses(){
    return quantidadeClasses;
}

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
    CodigoAgencia();
    void setCodigoAgencia(string);
    string getCodigoAgencia();
    static int getQuantidadeAgencias();
    virtual ~CodigoAgencia();
};

inline string CodigoAgencia::getCodigoAgencia(){
    return numeroAgencia;
}

inline int CodigoAgencia::getQuantidadeAgencias(){
    return quantidadeAgencias;
}

class CodigoAplicacao{
private:
    const static int QUANTIDADE_APLICACOES_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_CODIGO_APLICACAO = 5;
    const static string NUMERO_APLICACAO_INVALIDO;
    string numeroAplicacao;
    static int quantidadeAplicacoes;
    void validar(string);
public:
    CodigoAplicacao();
    void setCodigoAplicacao(string);
    string getCodigoAplicacao();
    static int getQuantidadeAplicacoes();
    virtual ~CodigoAplicacao();
};

inline string CodigoAplicacao::getCodigoAplicacao(){
    return numeroAplicacao;
}

inline int CodigoAplicacao::getQuantidadeAplicacoes(){
    return quantidadeAplicacoes;
}

class CodigoBanco{
private:
    const static int QUANTIDADE_BANCOS_DEFAULT = 0;
    const static int QUANTIDADE_DIGITOS_CODIGO_BANCO = 3;
    static string codigosBancosPossiveis[5][2];
    string numeroBanco;
    static int quantidadeCodigosBancos;
    void validar(string);
public:
    CodigoBanco();
    void setCodigoBanco(string);
    string getCodigoBanco();
    static int getQuantidadeCodigosBancos();
    virtual ~CodigoBanco();
};

inline string CodigoBanco::getCodigoBanco(){
    return numeroBanco;
}

inline int CodigoBanco::getQuantidadeCodigosBancos(){
    return quantidadeCodigosBancos;
}

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
    CodigoProduto();
    void setCodigoProduto(string);
    string getCodigoProduto();
    static int getQuantidadeCodigosProdutos();
    virtual ~CodigoProduto();
};

inline string CodigoProduto::getCodigoProduto(){
    return numeroCodigoProduto;
}

inline int CodigoProduto::getQuantidadeCodigosProdutos(){
    return quantidadeCodigosProdutos;
}

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
    Cpf();
    void setNumeroCpf(string);
    string getNumeroCpf();
    static int getQuantidadeCPFs();
    virtual ~Cpf();
};

inline string Cpf::getNumeroCpf(){
    return numeroCpf;
}

inline int Cpf::getQuantidadeCPFs(){
    return quantidadeCPFs;
}

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
    Data();
    void setNumeroData(string);
    string getNumeroData();
    static int getQuantidadeDatas();
    virtual ~Data();
};

inline string Data::getNumeroData(){
    return numeroData;
}

inline int Data::getQuantidadeDatas(){
    return quantidadeDatas;
}

class Emissor{
private:
    const static int QUANTIDADE_EMISSORES_DEFAULT = 0;
    static int minMaxCaracteresPossiveis[2];
    static char caracteresEspeciaisPossiveis[3];
    string nomeEmissor;
    static int quantidadeEmissores;
    void validar(string);
public:
    Emissor();
    void setNomeEmissor(string);
    string getNomeEmissor();
    static int getQuantidadeEmissores();
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
