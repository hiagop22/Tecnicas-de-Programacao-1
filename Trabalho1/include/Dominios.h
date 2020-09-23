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
    static string numeroAplicacaoNaoPossivel;
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

class CodigoDeProduto{
private:
public:
};

class Cpf{
private:
public:
};

class Data{
private:
public:
};

class Emissor{
private:
public:
};

#endif // DOMINIOS_H
