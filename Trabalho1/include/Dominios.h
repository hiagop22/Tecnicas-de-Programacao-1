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

class codigoDeAplicacao{
private:
public:
};

class CodigoDeBanco{
private:
public:
};

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
