#ifndef DOMINIOS_H
#define DOMINIOS_H
#include<string>

using std::string;

class Cep{
private:
public:
};

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

class CodigoDaAgencia{
private:
public:
};

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
