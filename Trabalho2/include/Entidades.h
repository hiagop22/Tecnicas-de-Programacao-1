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
};

class Conta{
    private:
        CodigoBanco banco;
        CodigoAgencia agencia;
        Numero numero;
    public:
        Conta();
        virtual ~Conta();
};

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
        virtual ~Produto;
};

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
};

#endif // ENTIDADES_H
