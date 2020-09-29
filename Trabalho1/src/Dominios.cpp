#include "Dominios.h"
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

// ----------------- Inicialização de atributos estáticos ----------------- //
// -> Cep <- //
int Cep::quantidadeCeps = Cep::QUANTIDADE_CEPS_DEFAULT;
int Cep::minMaxCepsPossiveis[6][2] = {{1000000,5999999},
                                      {8000000,8499999},
                                      {20000000,26600999},
                                      {70000000,70999999},
                                      {40000000,41999999},
                                      {60000000,60999999}};
string Cep::locaisCepsPossiveis[7] = {"São Paulo",
                                      "São Paulo",
                                      "Rio de Janeiro",
                                      "Brasília",
                                      "Salvador",
                                      "Fortaleza"};

// -> Classe <- //
int Classe::quantidadeClasses = Classe::QUANTIDADE_CLASSES_DEFAULT;
string Classe::classesPossiveis = "CDB LCA LCI LF LC";

// -> Codigo de Agencia <- //
int CodigoAgencia::quantidadeAgencias = CodigoAgencia::QUANTIDADE_AGENCIAS_DEFAULT;
const string CodigoAgencia::NUMERO_AGENCIA_INVALIDO = "0000";

// -> Codigo de Aplicação <- //
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

// -> Data <- //
int Data::quantidadeDatas = Data::QUANTIDADE_DATAS_DEFAULT;
const string Data::FORMATO_STRING_VALIDO = "XX/XX/XXXX";
const string Data::REPRESENTACAO_NUMERO = "X";
int Data::minMaxDiasPossiveisAnosNaoBissextos[2] = {1, 31};
int Data::minMaxDiasPossiveisAnosBissextos[2] = {1, 32};
int Data::minMaxMesesPossiveis[2] = {1, 12};
int Data::minMaxAnosPossiveis[2] = {2020, 2099};
int Data::anosBissextos[20] = {2020,2024,2028,2032,2036,2040,2044,2048,2052,2056,2060,
                               2064,2068,2072,2076,2080,2084,2088,2092,2096};

// -> Emissor <- //
int Emissor::quantidadeEmissores = Emissor::QUANTIDADE_EMISSORES_DEFAULT;
int Emissor::minMaxCaracteresPossiveis[2] = {5, 30};
char Emissor::caracteresEspeciaisPossiveis[3] = {'-', '.', ' '};


// ----------------- Definição de métodos ----------------- //
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
    throw invalid_argument("Argumento inválido.");
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
        throw invalid_argument("Argumento Inválido.");
}

void Classe::setClasse(string nomeClasse){
    validar(nomeClasse);
    this->nomeClasse = nomeClasse;
}

Classe::~Classe(){
    quantidadeClasses--;
}

// -> Código Agência <- //
CodigoAgencia::CodigoAgencia(){
    quantidadeAgencias++;
}

void CodigoAgencia::validar(string numeroAgencia){
    int i;

    if(numeroAgencia.size() != QUANTIDADE_DIGITOS_CODIGO_AGENCIA || numeroAgencia.c_str() == NUMERO_AGENCIA_INVALIDO)
        throw invalid_argument("Argumento Inválido.");

    //  Verifica se todos os índices são dígitos
    for(i=0; i < (int) numeroAgencia.size(); ++i){
        if(!isdigit(numeroAgencia[i]))
            throw invalid_argument("Argumento Inválido.");
    }
}

void CodigoAgencia::setCodigoAgencia(string numeroAgencia){
    validar(numeroAgencia);
    this->numeroAgencia = numeroAgencia;
}

CodigoAgencia::~CodigoAgencia(){
    quantidadeAgencias--;
}

// -> Código Aplicacão <- //
CodigoAplicacao::CodigoAplicacao(){
    quantidadeAplicacoes++;
}

void CodigoAplicacao::validar(string numeroAplicacao){
    int i;

    if(numeroAplicacao.size() != QUANTIDADE_DIGITOS_CODIGO_APLICACAO || numeroAplicacao.c_str() == NUMERO_APLICACAO_INVALIDO)
        throw invalid_argument("Argumento Inválido.");

    // Verifica se todos os caracteres da string numeroAplicação são números
    for(i = 0; i < (int)numeroAplicacao.size(); ++i){
        if(!isdigit(numeroAplicacao[i]))
            throw invalid_argument("Argumento Inválido.");
    }
}

void CodigoAplicacao::setCodigoAplicacao(string numeroAplicacao){
    validar(numeroAplicacao);
    this->numeroAplicacao = numeroAplicacao;
}

CodigoAplicacao::~CodigoAplicacao(){
    quantidadeAplicacoes--;
}

// -> Código Banco <- //
CodigoBanco::CodigoBanco(){
    quantidadeCodigosBancos++;
}

void CodigoBanco::validar(string numeroBanco){
    int i;
    int lengthArrayCodigoBancosPossiveis = (sizeof(codigosBancosPossiveis)/sizeof(*codigosBancosPossiveis));
    size_t found;

//  Verifica o tamanho
    if(numeroBanco.size() != QUANTIDADE_DIGITOS_CODIGO_BANCO )
        throw invalid_argument("Argumento Inválido.");

//  Verifica se todos os índices são dígitos
    for(i=0; i < (int)codigosBancosPossiveis[0][0].size(); ++i){
        if(!isdigit(numeroBanco[i]))
            throw invalid_argument("Argumento Inválido.");
    }

//  Verifica se a variável numeroBanco é um entre os
//  possíveis, se for sai da função, caso contrário
//  termina o loop e cai em um levantamento de excessão
    for(i=0; i < lengthArrayCodigoBancosPossiveis; ++i){
        found = codigosBancosPossiveis[i][0].find(numeroBanco);
        if(found != string::npos)
            return;
    }

    throw invalid_argument("Argumento Inválido.");
}

void CodigoBanco::setCodigoBanco(string numeroBanco){
    validar(numeroBanco);
    this->numeroBanco = numeroBanco;
}

CodigoBanco::~CodigoBanco(){
    quantidadeCodigosBancos--;
}

// -> Código Produto <- //
CodigoProduto::CodigoProduto(){
    quantidadeCodigosProdutos++;
}

void CodigoProduto::validar(string numeroProduto){
    int i;

    if(numeroProduto.size() != QUANTIDADE_DIGITOS_CODIGO_PRODUTO || numeroProduto.c_str() == NUMERO_PRODUTO_INVALIDO)
        throw invalid_argument("Argumento Inválido.");

    // Verifica se todos os caracteres da string numeroAplicação são números
    for(i = 0; i < (int)numeroProduto.size(); ++i){
        if(!isdigit(numeroProduto[i]))
            throw invalid_argument("Argumento Inválido.");
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
// Utilizado o conteúdo de:
// https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/

    int i, j;
    int aux;
    int primeiroDigitoValidoAposSinal;

    // Verifica os pontos, o hífen no númeroCpf e se todos os caracteres restantes são números
    try{
    for(i=0; i< (int)Cpf::FORMATO_STRING_VALIDO.size(); ++i){
        if(FORMATO_STRING_VALIDO[i] != REPRESENTACAO_NUMERO[0] && numeroCpf.c_str()[i] != FORMATO_STRING_VALIDO[i])
            throw invalid_argument("Argumento inválido");
        if(FORMATO_STRING_VALIDO[i] == REPRESENTACAO_NUMERO[0] && !isdigit(numeroCpf[i]))
            throw invalid_argument("Argumento inválido");
    }
    }
    catch(...){
        //provavelmente o tamanho da string recebida foi menor que a string default e nisso houve uma tentativa
        // não permitida de acesso de espaço de memória
        throw invalid_argument("Argumento inválido");
    }

    // Validação do primeiro dígito verificador após o sinal
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
        throw invalid_argument("Argumento inválido");

    // Verifica o segundo digito verificador após o sinal
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
        throw invalid_argument("Argumento inválido");

    // Levantamento de excessões para cpf's inválidos, ou seja, que possuem todos os dígitos repetidos.
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

    throw invalid_argument("Argumento inválido");
}

void Cpf::setNumeroCpf(string numeroCpf){
    validar(numeroCpf);
    this->numeroCpf = numeroCpf;
}

Cpf::~Cpf(){
    quantidadeCPFs--;
}


// -> Datas <- //
Data::Data(){
    quantidadeDatas++;
}

void Data::validar(string numeroData){
    int i, j;
    int aux;

    // Verifica os simbolos separadores e se todos os caracteres restantes são números
    try{
    for(i=0; i< (int)Data::FORMATO_STRING_VALIDO.size(); ++i){
        if(FORMATO_STRING_VALIDO[i] != REPRESENTACAO_NUMERO[0] && numeroData.c_str()[i] != FORMATO_STRING_VALIDO[i])
            throw invalid_argument("Argumento inválido");
        if(FORMATO_STRING_VALIDO[i] == REPRESENTACAO_NUMERO[0] && !isdigit(numeroData[i]))
            throw invalid_argument("Argumento inválido");
    }
    }
    catch(...){
        //provavelmente o tamanho da string recebida foi menor que a string default e nisso houve uma tentativa
        // não permitida de acesso de espaço de memória
        throw invalid_argument("Argumento inválido");
    }


    int valor;
    string dia = {numeroData[0], numeroData[1]};
    string mes = {numeroData[3],numeroData[4]};
    string ano = {numeroData[6], numeroData[7], numeroData[8], numeroData[9]};

    if(!(minMaxAnosPossiveis[0] <= atoi(ano.c_str()) && atoi(ano.c_str()) <= minMaxAnosPossiveis[1]))
        throw invalid_argument("Argumento inválido");

    if(!(minMaxMesesPossiveis[0] <= atoi(mes.c_str()) && atoi(mes.c_str()) <= minMaxMesesPossiveis[1]))
        throw invalid_argument("Argumento inválido");

    // Verifica dias nos anos bissextos
    int lengthArrayAnosBissextoss = (sizeof(anosBissextos)/sizeof(*anosBissextos));

    for(i=0; i < lengthArrayAnosBissextoss; ++i){
        if(atoi(ano.c_str()) == anosBissextos[i]){
            if(minMaxDiasPossiveisAnosBissextos[0] <= atoi(dia.c_str()) && atoi(dia.c_str()) <= minMaxDiasPossiveisAnosBissextos[1])
                return;
            else
                throw invalid_argument("Argumento inválido");
        }
    }

    // Verifica dias nos anos não bissextos
    if(!(minMaxDiasPossiveisAnosNaoBissextos[0] <= atoi(dia.c_str()) && atoi(dia.c_str()) <= minMaxDiasPossiveisAnosNaoBissextos[1]))
        throw invalid_argument("Argumento inválido");
}

void Data::setNumeroData(string numeroData){
    validar(numeroData);
    this->numeroData = numeroData;
}

Data::~Data(){
    quantidadeDatas--;
}


// -> Emissor <- //
Emissor::Emissor(){
    quantidadeEmissores++;
}

void Emissor::validar(string nomeEmissor){
    int i, j;
    int aux;
    bool caractereEspecial;
    int lengthArrayCaracteresEspeciaisPossiveis = (sizeof(caracteresEspeciaisPossiveis)/sizeof(*caracteresEspeciaisPossiveis));

    if(!(minMaxCaracteresPossiveis[0] <= nomeEmissor.size()  && nomeEmissor.size() <= minMaxCaracteresPossiveis[1]))
        throw invalid_argument("Argumento inválido");

    if(isdigit(nomeEmissor[0]) && !isupper(nomeEmissor[0]))
        throw invalid_argument("Argumento inválido");

    for(i=0; i< nomeEmissor.size(); ++i){
        if(isalnum(nomeEmissor[i]))
            continue;
        for(j=0, caractereEspecial = false; j < lengthArrayCaracteresEspeciaisPossiveis; ++j){
            if(nomeEmissor[j] == caracteresEspeciaisPossiveis[j]){
                caractereEspecial = true;
                break;
            }
        }

        if(!caractereEspecial)
            throw invalid_argument("Argumento inválido");

        if(i!=(nomeEmissor.size() -2)){
            if(!isalpha(nomeEmissor[i]) && !isalpha(nomeEmissor[i+1]))
                throw invalid_argument("Argumento inválido");
        }

    }


}

void Emissor::setNomeEmissor(string nomeEmissor){
    validar(nomeEmissor);
    this->nomeEmissor = nomeEmissor;
}

Emissor::~Emissor(){
    quantidadeEmissores--;
}
