#include "Dominios.h"
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

// ----------------- Inicializa��o de atributos est�ticos ----------------- //
// -> Cep <- //
int Cep::quantidadeCeps = Cep::QUANTIDADE_CEPS_DEFAULT;
int Cep::minMaxCepsPossiveis[6][2] = {{1000000,5999999},
                                      {8000000,8499999},
                                      {20000000,26600999},
                                      {70000000,70999999},
                                      {40000000,41999999},
                                      {60000000,60999999}};
string Cep::locaisCepsPossiveis[7] = {"S�o Paulo",
                                      "S�o Paulo",
                                      "Rio de Janeiro",
                                      "Bras�lia",
                                      "Salvador",
                                      "Fortaleza"};

// -> Classe <- //
int Classe::quantidadeClasses = Classe::QUANTIDADE_CLASSES_DEFAULT;
string Classe::classesPossiveis = "CDB LCA LCI LF LC";

// -> Codigo de Agencia <- //
int CodigoAgencia::quantidadeAgencias = CodigoAgencia::QUANTIDADE_AGENCIAS_DEFAULT;
string CodigoAgencia::agenciaNaoPossivel = "0000";

// -> Codigo de Aplica��o <- //
int CodigoAplicacao::quantidadeAplicacoes = CodigoAplicacao::QUANTIDADE_APLICACOES_DEFAULT;
string CodigoAplicacao::numeroAplicacaoNaoPossivel = "00000";

// -> Codigo de Banco <- //
int CodigoBanco::quantidadeCodigosBancos = CodigoBanco::QUANTIDADE_BANCOS_DEFAULT;
string CodigoBanco::codigosBancosPossiveis[5][2] = {{"341", "Banco Itau"},
                                                    {"001", "Banco do Brasil"},
                                                    {"237", "Banco Bradesco"},
                                                    {"104", "Banco Caixa Economica Federal"},
                                                    {"033", "Banco Santander"}};

// ----------------- Defini��o de m�todos ----------------- //
// -> Cep <- //
Cep::Cep(){
    quantidadeCeps++;
}

void Cep::validarNumeroCep(int numeroCep){
    int i;
    int lengthArrayCeps = (sizeof(minMaxCepsPossiveis)/sizeof(*minMaxCepsPossiveis));

    for(i=0; i<lengthArrayCeps; ++i){
        if(numeroCep>=minMaxCepsPossiveis[i][0] && numeroCep<=minMaxCepsPossiveis[i][1])
            return;
    }
    throw invalid_argument("Argumento inv�lido.");
}

void Cep::setCep(int numeroCep){
    validarNumeroCep(numeroCep);
    this->numeroCep = numeroCep;
}

Cep::~Cep(){
    quantidadeCeps--;
}

// -> Classe <- //
Classe::Classe(){
    quantidadeClasses++;
}

void Classe::validar(string nomeClasse){
    size_t found = classesPossiveis.find(nomeClasse);
    if(found == string::npos)
        throw invalid_argument("Argumento Inv�lido.");
}

void Classe::setClasse(string nomeClasse){
    validar(nomeClasse);
    this->nomeClasse = nomeClasse;
}

Classe::~Classe(){
    quantidadeClasses--;
}

// -> C�digo Ag�ncia <- //
CodigoAgencia::CodigoAgencia(){
    quantidadeAgencias++;
}

void CodigoAgencia::validar(string numeroAgencia){
    int i;

    if(numeroAgencia.size() != 4 || atoi(numeroAgencia.c_str()) == 0)
        throw invalid_argument("Argumento Inv�lido.");

    for(i = 0; i < (int)numeroAgencia.size(); ++i){
        if(!isdigit(numeroAgencia[i]))
            throw invalid_argument("Argumento Inv�lido.");
    }
}

void CodigoAgencia::setCodigoAgencia(string numeroAgencia){
    validar(numeroAgencia);
    this->numeroAgencia = numeroAgencia;
}

CodigoAgencia::~CodigoAgencia(){
    quantidadeAgencias--;
}

// -> C�digo Aplicac�o <- //
CodigoAplicacao::CodigoAplicacao(){
    quantidadeAplicacoes++;
}

void CodigoAplicacao::validar(string numeroAplicacao){
    int i;

    if(numeroAplicacao.size() != 5 || atoi(numeroAplicacao.c_str()) == 0)
        throw invalid_argument("Argumento Inv�lido.");

    for(i = 0; i < (int)numeroAplicacao.size(); ++i){
        if(!isdigit(numeroAplicacao[i]))
            throw invalid_argument("Argumento Inv�lido.");
    }
}

void CodigoAplicacao::setCodigoAplicacao(string numeroAplicacao){
    validar(numeroAplicacao);
    this->numeroAplicacao = numeroAplicacao;
}

CodigoAplicacao::~CodigoAplicacao(){
    quantidadeAplicacoes--;
}

// -> C�digo Banco <- //
CodigoBanco::CodigoBanco(){
    quantidadeCodigosBancos++;
}

void CodigoBanco::validar(string numeroBanco){
    int i;
    int lengthArrayCodigoBancosPossiveis = (sizeof(codigosBancosPossiveis)/sizeof(*codigosBancosPossiveis));
    size_t found;

//  Verifica o tamanho
    if(numeroBanco.size() != 3)
        throw invalid_argument("Argumento Inv�lido.");

//  Verifica se todos os �ndices s�o d�gitos
    for(i=0; i < (int)codigosBancosPossiveis[0][0].size(); ++i){
        if(!isdigit(numeroBanco[i]))
            throw invalid_argument("Argumento Inv�lido.");
    }

//  Verifica se a vari�vel numeroBanco � um entre os
//  poss�veis, se for sai da fun��o, caso contr�rio
//  termina o loop e cai em um levantamento de excess�o
    for(i=0; i < lengthArrayCodigoBancosPossiveis; ++i){
        found = codigosBancosPossiveis[i][0].find(numeroBanco);
        if(found != string::npos)
            return;
    }

    throw invalid_argument("Argumento Inv�lido.");
}

void CodigoBanco::setCodigoBanco(string numeroBanco){
    validar(numeroBanco);
    this->numeroBanco = numeroBanco;
}

CodigoBanco::~CodigoBanco(){
    quantidadeCodigosBancos--;
}
