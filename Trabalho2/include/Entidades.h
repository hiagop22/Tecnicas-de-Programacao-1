#ifndef ENTIDADES_H
#define ENTIDADES_H
#include "Dominios.h"

class Aplicacao{
    private:
        CodigoAplicacao codigo;
        ValorDeAplicacao valor;
        Data data;
    public:
        Aplicacao();
        virtual ~Aplicacao();
        void setCodigo(const CodigoAplicacao&);
        CodigoAplicacao getCodigo() const;
        void setValor(const ValorDeAplicacao&);
        ValorDeAplicacao getValor() const;
        void setData(const Data&);
        Data getData() const;
};

inline void Aplicacao::setCodigo(const CodigoAplicacao &codigo){
    this->codigo = codigo;
}

inline CodigoAplicacao Aplicacao::getCodigo() const{
    return codigo;
}

inline void Aplicacao::setValor(const ValorDeAplicacao &valor){
    this->valor = valor;
}

inline ValorDeAplicacao Aplicacao::getValor() const{
    return valor;
}

inline void Aplicacao::setData(const Data &data){
    this->data = data;
}

inline Data Aplicacao::getData() const{
    return data;
}

class Conta{
    private:
        CodigoBanco banco;
        CodigoAgencia agencia;
        Numero numero;
    public:
        Conta();
        virtual ~Conta();
        void setBanco(const CodigoBanco&);
        CodigoBanco getBanco() const;
        void setAgencia(const CodigoAgencia&);
        CodigoAgencia getAgencia() const;
        void setNumero(const Numero&);
        Numero getNumero() const;
};

inline void Conta::setBanco(const CodigoBanco &banco){
    this->banco = banco;
}

inline CodigoBanco Conta::getBanco() const{
    return banco;
}

inline void Conta::setAgencia(const CodigoAgencia &agencia){
    this->agencia = agencia;
}

inline CodigoAgencia Conta::getAgencia() const{
    return agencia;
}

inline void Conta::setNumero(const Numero &numero){
    this->numero = numero;
}

inline Numero Conta::getNumero() const{
    return numero;
}

class Produto{
    private:
        CodigoProduto codigo;
        Classe classe;
        Emissor emissor;
        Prazo prazo;
        Data vencimento;
        Taxa taxa;
        Horario horario;
        ValorMinimo valor;
    public:
        Produto();
        virtual ~Produto();

        void setCodigo(const CodigoProduto&);
        CodigoProduto getCodigo() const;
        void setClasse(const Classe&);
        Classe getClasse() const;
        void setEmissor(const Emissor&);
        Emissor getEmissor() const;
        void setPrazo(const Prazo&);
        Prazo getPrazo() const;
        void setVencimento(const Data&);
        Data getVencimento() const;
        void setTaxa(const Taxa&);
        Taxa getTaxa() const;
        void setHorario(const Horario&);
        Horario getHorario() const;
        void setValor(const ValorMinimo&);
        ValorMinimo getValor() const;
};

inline void Produto::setCodigo(const CodigoProduto &codigo){
    this->codigo = codigo;
}

inline CodigoProduto Produto::getCodigo() const{
    return codigo;
}

inline void Produto::setClasse(const Classe &classe){
    this->classe = classe;
}

inline Classe Produto::getClasse() const{
    return classe;
}

inline void Produto::setEmissor(const Emissor &emissor){
    this->emissor = emissor;
}

inline Emissor Produto::getEmissor() const{
    return emissor;
}

inline void Produto::setPrazo(const Prazo &prazo){
    this->prazo = prazo;
}

inline Prazo Produto::getPrazo() const{
    return prazo;
}

inline void Produto::setVencimento(const Data &vencimento){
    this->vencimento = vencimento;
}

inline Data Produto::getVencimento() const{
    return vencimento;
}

inline void Produto::setTaxa(const Taxa &taxa){
    this->taxa = taxa;
}

inline Taxa Produto::getTaxa() const{
    return taxa;
}

inline void Produto::setHorario(const Horario &horario){
    this->horario = horario;
}

inline Horario Produto::getHorario() const{
    return horario;
}

inline void Produto::setValor(const ValorMinimo &valor){
    this->valor = valor;
}

inline ValorMinimo Produto::getValor() const{
    return valor;
}

class Usuario{
    private:
        Nome nome;
        Endereco endereco;
        Cep cep;
        Cpf cpf;
        Senha senha;
    public:
        Usuario();
        virtual ~Usuario();
        void setNome(const Nome&);
        Nome getNome() const;
        void setEndereco(const Endereco&);
        Endereco getEndereco() const;
        void setCep(const Cep&);
        Cep getCep() const;
        void setCpf(const Cpf&);
        Cpf getCpf() const;
        void setSenha(const Senha&);
        Senha getSenha() const;
};

inline void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}

inline Nome Usuario::getNome() const{
    return nome;
}

inline void Usuario::setEndereco(const Endereco &endereco){
    this->endereco = endereco;
}

inline Endereco Usuario::getEndereco() const{
    return endereco;
}

inline void Usuario::setCep(const Cep &cep){
    this->cep = cep;
}

inline Cep Usuario::getCep() const{
    return cep;
}

inline void Usuario::setCpf(const Cpf &cpf){
    this->cpf = cpf;
}

inline Cpf Usuario::getCpf() const{
    return cpf;
}

inline void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}

inline Senha Usuario::getSenha() const{
    return senha;
}

#endif // ENTIDADES_H
