#ifndef ENTIDADES_H
#define ENTIDADES_H
#include "Dominios.h"

class Aplicacao{
    private:
        CodigoAplicacao codigo;
        ValorDeAplicacao valor;
        Data data;
        static int quantidadeInstancias;
    public:
        Aplicacao();
        virtual ~Aplicacao();
        static int getQuantidadeInstancias();

        void setCodigo(const CodigoAplicacao&);
        CodigoAplicacao getCodigo() const;
        void setValor(const ValorDeAplicacao&);
        ValorDeAplicacao getValor() const;
        void setData(const Data&);
        Data getData() const;
};
inline Aplicacao::Aplicacao(){
    quantidadeInstancias++;
}
inline Aplicacao::~Aplicacao(){
    quantidadeInstancias--;
}

inline Aplicacao::getQuantidadeInstancias(){
    return quantidadeInstancias;
}

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
        static int quantidadeInstancias;
    public:
        Conta();
        virtual ~Conta();
        static int getQuantidadeInstancias();

        void setBanco(const CodigoBanco&);
        CodigoBanco getBanco() const;
        void setAgencia(const CodigoAgencia&);
        CodigoAgencia getAgencia() const;
        void setNumero(const Numero&);
        Numero getNumero() const;
};

inline Conta::Conta(){
    quantidadeInstancias++;
}
inline Conta::~Conta(){
    quantidadeInstancias--;
}

inline Conta::getQuantidadeInstancias(){
    return quantidadeInstancias;
}

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
        static int quantidadeInstancias;
    public:
        Produto();
        virtual ~Produto();
        static int getQuantidadeInstancias();

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

inline Produto::Produto(){
    quantidadeInstancias++;
}
inline Produto::~Produto(){
    quantidadeInstancias--;
}

inline Produto::getQuantidadeInstancias(){
    return quantidadeInstancias;
}

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

/// Padrão para codificação de usuários.
class Usuario{
    private:
        Nome nome;
        Endereco endereco;
        Cep cep;
        Cpf cpf;
        Senha senha;
        static int quantidadeInstancias;
    public:
        /// \brief Incrementa a variável responsável por armazenar o número de instancias da classe Usuario.
        Usuario();
        /// \brief Decrementa a variável responsável por armazenar o número de instancias da classe Usuario.
        virtual ~Usuario();
        /// \return Quantidade de instâncias da classe Usuario.
        static int getQuantidadeInstancias();

        /// \brief Define o nome como o parâmetro recebido.
        void setNome(const Nome&);
        /// \brief Retorna o nome, caso o mesmo tenha sido passado para o método set.
        /// \return nome cadastrado.
        Nome getNome() const;
        /// \brief Define o endereco como o parâmetro recebido
        void setEndereco(const Endereco&);
        /// \brief Retorna o endereco, caso o mesmo tenha sido passado para o método set.
        /// \return endereco cadastrado.
        Endereco getEndereco() const;
        /// \brief Define o cep como o parâmetro recebido
        void setCep(const Cep&);
        /// \brief Retorna o cep, caso o mesmo tenha sido passado para o método set.
        /// \return cep cadastrado.
        Cep getCep() const;
        /// \brief Define o cpf como o parâmetro recebido
        void setCpf(const Cpf&);
        /// \brief Retorna o cpf, caso o mesmo tenha sido passado para o método set.
        /// \return cpf cadastrado.
        Cpf getCpf() const;
        /// \brief Define a senha como o parâmetro recebido
        void setSenha(const Senha&);
        /// \brief Retorna a senha, caso o mesmo tenha sido passado para o método set.
        /// \return senha cadastrado.
        Senha getSenha() const;
};

inline Usuario::Usuario(){
    quantidadeInstancias++;
}
inline Usuario::~Usuario(){
    quantidadeInstancias--;
}

inline Usuario::getQuantidadeInstancias(){
    return quantidadeInstancias;
}

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
