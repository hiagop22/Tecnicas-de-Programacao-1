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
const string CodigoAgencia::NUMERO_AGENCIA_INVALIDO = "0000";

// -> Codigo de Aplica��o <- //
int CodigoAplicacao::quantidadeAplicacoes = CodigoAplicacao::QUANTIDADE_APLICACOES_DEFAULT;
const string CodigoAplicacao::NUMERO_APLICACAO_INVALIDO = "00000";

// -> Codigo de Banco <- //
int CodigoBanco::quantidadeCodigosBancos = CodigoBanco::QUANTIDADE_BANCOS_DEFAULT;
string CodigoBanco::codigosBancosPossiveis[5][2] = {{"341", "Banco Itau"},
                                                    {"001", "Banco do Brasil"},
                                                    {"237", "Banco Bradesco"},
                                                    {"104", "Banco Caixa Economica Federal"},
                                                    {"033", "Banco Santander"}};

// -> Codigo de Produto <- //
int CodigoProduto::quantidadeCodigosProdutos = CodigoProduto::QUANTIDADE_CODIGOS_PRODUTOS_DEFAULT;
const string CodigoProduto::NUMERO_PRODUTO_INVALIDO = "000";

// -> CPF <- //
int Cpf::quantidadeCPFs = Cpf::QUANTIDADE_CPFS_DEFAULT;
const string Cpf::FORMATO_STRING_VALIDO = "XXX.XXX.XXX-XX";
const string Cpf::REPRESENTACAO_NUMERO = "X";
const int Cpf::POSICAO_PRIMEIRO_DIGITO_VERIFICADOR = Cpf::FORMATO_STRING_VALIDO.size() -2;
const int Cpf::POSICAO_SEGUNDO_DIGITO_VERIFICADOR = Cpf::FORMATO_STRING_VALIDO.size() -1;

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

    if(numeroAgencia.size() != QUANTIDADE_DIGITOS_CODIGO_AGENCIA || numeroAgencia.c_str() == NUMERO_AGENCIA_INVALIDO)
        throw invalid_argument("Argumento Inv�lido.");

    //  Verifica se todos os �ndices s�o d�gitos
    for(i=0; i < (int) numeroAgencia.size(); ++i){
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

    if(numeroAplicacao.size() != QUANTIDADE_DIGITOS_CODIGO_APLICACAO || numeroAplicacao.c_str() == NUMERO_APLICACAO_INVALIDO)
        throw invalid_argument("Argumento Inv�lido.");

    // Verifica se todos os caracteres da string numeroAplica��o s�o n�meros
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
    if(numeroBanco.size() != QUANTIDADE_DIGITOS_CODIGO_BANCO )
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

// -> C�digo Produto <- //
CodigoProduto::CodigoProduto(){
    quantidadeCodigosProdutos++;
}

void CodigoProduto::validar(string numeroProduto){
    int i;

    if(numeroProduto.size() != QUANTIDADE_DIGITOS_CODIGO_PRODUTO || numeroProduto.c_str() == NUMERO_PRODUTO_INVALIDO)
        throw invalid_argument("Argumento Inv�lido.");

    // Verifica se todos os caracteres da string numeroAplica��o s�o n�meros
    for(i = 0; i < (int)numeroProduto.size(); ++i){
        if(!isdigit(numeroProduto[i]))
            throw invalid_argument("Argumento Inv�lido.");
    }
}

void CodigoProduto::setCodigoProduto(string numeroCodigoProduto){
    validar(numeroCodigoProduto);
    this->numeroCodigoProduto = numeroCodigoProduto;
}

CodigoProduto::~CodigoProduto(){
    quantidadeCodigosProdutos--;
}

// -> CPF <- //
Cpf::Cpf(){
    quantidadeCPFs++;
}

void Cpf::validar(string numeroCpf){
// Utilizado o conte�do de:
// https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/

    int i, j;
    int aux;
    int primeiroDigitoValidoAposSinal;

    // Verifica os pontos, o h�fen no n�meroCpf e se todos os caracteres restantes s�o n�meros
    try{
    for(i=0; i< (int)Cpf::FORMATO_STRING_VALIDO.size(); ++i){
        if(FORMATO_STRING_VALIDO[i] != REPRESENTACAO_NUMERO[0] && numeroCpf.c_str()[i] != FORMATO_STRING_VALIDO[i])
            throw invalid_argument("Argumento inv�lido");
        if(FORMATO_STRING_VALIDO[i] == REPRESENTACAO_NUMERO[0] && !isdigit(numeroCpf[i]))
            throw invalid_argument("Argumento inv�lido");
    }
    }
    catch(...){
        //provavelmente o tamanho da string recebida foi menor que a string default e nisso houve uma tentativa
        // n�o permitida de acesso de espa�o de mem�ria
        throw invalid_argument("Argumento inv�lido");
    }

    // Valida��o do primeiro d�gito verificador ap�s o sinal
    aux = 0;
    for(i=0, j=10; i< (int)Cpf::FORMATO_STRING_VALIDO.size(); ++i){
        if(FORMATO_STRING_VALIDO[i] == REPRESENTACAO_NUMERO[0]){
            aux += (((int)numeroCpf[i] -48)*j);
            if(j == 2)
                break;
            --j;
        }
    }

    primeiroDigitoValidoAposSinal = (aux*10)%11;
    if(primeiroDigitoValidoAposSinal==10)
        primeiroDigitoValidoAposSinal = 0;

    if(primeiroDigitoValidoAposSinal != ((int)numeroCpf[POSICAO_PRIMEIRO_DIGITO_VERIFICADOR] - 48))
        throw invalid_argument("Argumento inv�lido");

    // Verifica o segundo digito verificador ap�s o sinal
    aux = 0;
    for(i=0, j=11; i< (int)Cpf::FORMATO_STRING_VALIDO.size(); ++i){
        if(FORMATO_STRING_VALIDO[i] == REPRESENTACAO_NUMERO[0]){
            aux += (((int)numeroCpf[i] - 48)*j);
            if(j == 2)
                break;
            --j;
        }
    }

    primeiroDigitoValidoAposSinal = (aux*10)%11;
    if(primeiroDigitoValidoAposSinal==10)
        primeiroDigitoValidoAposSinal = 0;

    if(primeiroDigitoValidoAposSinal != ((int)numeroCpf[POSICAO_SEGUNDO_DIGITO_VERIFICADOR] - 48))
        throw invalid_argument("Argumento inv�lido");

    // Levantamento de excess�es para cpf's inv�lidos, ou seja, que possuem todos os d�gitos repetidos.
    int numeroAnterior = -1;

    for(i=0; i < (int)Cpf::FORMATO_STRING_VALIDO.size(); ++i){
        if(FORMATO_STRING_VALIDO[i] == REPRESENTACAO_NUMERO[0]){
            if(numeroAnterior == -1){
                numeroAnterior = ((int)numeroCpf[i] - 48);
            }
            else{
                if(numeroAnterior != ((int)numeroCpf[i] - 48))
                    return;
            }
        }
    }

    throw invalid_argument("Argumento inv�lido");
}

void Cpf::setNumeroCpf(string numeroCpf){
    validar(numeroCpf);
    this->numeroCpf = numeroCpf;
}

Cpf::~Cpf(){
    quantidadeCPFs--;
}
