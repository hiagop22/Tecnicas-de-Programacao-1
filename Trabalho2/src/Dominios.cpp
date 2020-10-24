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

// -> Endereço <- //
int Endereco::quantidadeEnderecos = Endereco::QUANTIDADE_ENDERECOS_DEFAULT;
int Endereco::minCaracteresPossiveis = 5;
int Endereco::maxCaracteresPossiveis = 20;

// -> Horario <- //
int Horario::quantidadeHorarios = Horario::QUANTIDADE_HORARIOS_DEFAULT;

// -> Nome <- //
int Nome::quantidadeNomes = Nome::QUANTIDADE_NOMES_DEFAULT;
int Nome::minCaracteresPossiveis = 5;
int Nome::maxCaracteresPossiveis = 30;

// -> Numero <- //
int Numero::quantidadeNumeros = Numero::QUANTIDADE_NUMEROS_DEFAULT;
string Numero::digitosVerificadoresPossiveis[11] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "X"};

const string Numero::FORMATO_STRING_VALIDO = "XXXXXX-X";
const string Numero::REPRESENTACAO_NUMERO = "X";
const int Numero::POSICAO_PRIMEIRO_DIGITO_VERIFICADOR = Numero::FORMATO_STRING_VALIDO.size() -2;
const int Numero::POSICAO_SEGUNDO_DIGITO_VERIFICADOR = Numero::FORMATO_STRING_VALIDO.size() -1;

// -> Prazo <- //
int Prazo::quantidadePrazos = Prazo::QUANTIDADE_PRAZOS_DEFAULT;
int Prazo::prazosPossiveis[12] = {6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66, 72};

// -> Senha <- //
int Senha::quantidadeSenhas = Senha::QUANTIDADE_SENHAS_DEFAULT;

// -> Taxa <- //
int Taxa::quantidadeTaxas = Taxa::QUANTIDADE_TAXAS_DEFAULT;
int Taxa::minTaxaPossivel = 0;
int Taxa::maxTaxaPossivel = 200;

// -> Valor de Aplicação <- //
int ValorDeAplicacao::quantidadeValoresAplicacao = ValorDeAplicacao::QUANTIDADE_VALORES_APLICACAO_DEFAULT;
int ValorDeAplicacao::minValorAplicacaoPossivel = 0;
int ValorDeAplicacao::maxValorAplicacaoPossivel = 1000000;

// -> Valor Minimo <- //
int ValorMinimo::quantidadeValoresMinimos = ValorMinimo::QUANTIDADE_VALORES_MINIMOS_DEFAULT;
int ValorMinimo::valoresMinimosPossiveis[4] = {1000, 5000, 10000, 50000};
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

void Cep::set(int numeroCep){
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
    int i;

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

    bool caractereEspecial;
    int lengthArrayCaracteresEspeciaisPossiveis = (sizeof(caracteresEspeciaisPossiveis)/sizeof(*caracteresEspeciaisPossiveis));

    if(!(minMaxCaracteresPossiveis[0] <= (int)nomeEmissor.size()  && (int)nomeEmissor.size() <= minMaxCaracteresPossiveis[1]))
        throw invalid_argument("Argumento inválido");

    if(isdigit(nomeEmissor[0]) && !isupper(nomeEmissor[0]))
        throw invalid_argument("Argumento inválido");

    for(i=0; i< (int)nomeEmissor.size(); ++i){
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

        if(i!= (int)(nomeEmissor.size() -2)){
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

// -> Endereço <- //
Endereco::Endereco(){
    quantidadeEnderecos++;
}

void Endereco::validar(string endereco){
    int i;

    if((int)endereco.size() < minCaracteresPossiveis || (int)endereco.size() > maxCaracteresPossiveis){
        throw invalid_argument("Argumento inválido. ");
    }
    if(isalpha(endereco[0]) && !isupper(endereco[0])){
        throw invalid_argument("Argumento inválido. ");
    }
    for(i = 0; i < (int)endereco.size(); i++){
        if(!isalpha(endereco[i]) && !isdigit(endereco[i]) && !ispunct(endereco[i]) && !isspace(endereco[i])){
            throw invalid_argument("Argumento inválido. ");
        }
        if(isspace(endereco[i]) && isspace(endereco[i + 1])){
            throw invalid_argument("Argumento inválido. ");
        }
        if(ispunct(endereco[i]) && ispunct(endereco[i + 1])){
            throw invalid_argument("Argumento inválido. ");
        }
        if(isspace(endereco[i]) && isalpha(endereco[i + 1]) && !isupper(endereco[i + 1])){
            throw invalid_argument("Argumento inválido. ");
        }
    }
}

void Endereco::setEndereco(string enderecoCompleto){
    validar(enderecoCompleto);
    this->enderecoCompleto = enderecoCompleto;
}

Endereco::~Endereco(){
    quantidadeEnderecos--;
}

// -> Horario <- //
Horario::Horario(){
    quantidadeHorarios++;
}

void Horario::validar(string horaFornecida){
    if(horaFornecida.size() != QUANTIDADE_DIGITOS_HORARIO){
        throw invalid_argument("Argumento inválido. ");
    }

    if((!isdigit(horaFornecida[0])) || (!isdigit(horaFornecida[1])) ||
       (!isdigit(horaFornecida[3])) || (!isdigit(horaFornecida[4]))){
        throw invalid_argument("Argumento inválido. ");
    }

    if(horaFornecida[2] != ':'){
        throw invalid_argument("Argumento inválido. ");
    }

    if((horaFornecida[0] - '0') * 10 + (horaFornecida[1] - '0') < 13){
        throw invalid_argument("Argumento inválido. ");
    }

    if((horaFornecida[0] - '0') * 10 + (horaFornecida[1] - '0') > 17){
        throw invalid_argument("Argumento inválido. ");
    }

    if((horaFornecida[3] - '0') * 10 + (horaFornecida[4] - '0') > 59){
        throw invalid_argument("Argumento inválido. ");
    }

    if((horaFornecida[0] - '0') * 10 + (horaFornecida[1] - '0') == 17 &&
        (horaFornecida[3] - '0') * 10 + (horaFornecida[4] - '0') > 0){
        throw invalid_argument("Argumento inválido. ");
    }
}

void Horario::setHorario(string valorHorario){
    validar(valorHorario);
    this->valorHorario = valorHorario;
}

Horario::~Horario(){
    quantidadeHorarios--;
}

// -> Nome <- //
Nome::Nome(){
    quantidadeNomes++;
}

void Nome::validar(string nome){
    int i;
    int contLetras = 0;

    if((int)nome.size() < (int)minCaracteresPossiveis || (int)nome.size() > maxCaracteresPossiveis){
        throw invalid_argument("Argumento inválido. ");
    }

    if(!isupper(nome[0])){
        throw invalid_argument("Argumento inválido. ");
    }

    for(i = 0; i < (int)nome.size(); i++){
        if(!isalpha(nome[i]) && !isspace(nome[i])){
            throw invalid_argument("Argumento inválido. ");
        }

        if(isspace(nome[i]) && !isupper(nome[i + 1])){
            throw invalid_argument("Argumento inválido. ");
        }

        if(isalpha(nome[i])){
            contLetras++;
        }
    }
    if(contLetras < 5){
        throw invalid_argument("Argumento inválido. ");
    }
}

void Nome::setNome(string nomeCompleto){
    validar(nomeCompleto);
    this->nomeCompleto = nomeCompleto;
}

Nome::~Nome(){
    quantidadeNomes--;
}

// -> Numero <- //
Numero::Numero(){
    quantidadeNumeros++;
}

void Numero::validar(string numero){
    int i;
    int j;
    int cont = 0;

    if(numero.size() != QUANTIDADE_DIGITOS_NUMERO){
        throw invalid_argument("Argumento inválido. ");
    }

    for(i = 0; i < (QUANTIDADE_DIGITOS_NUMERO - 2); i++){
        if(!isdigit(numero[i])){
            throw invalid_argument("Argumento inválido. ");
        }
    }

    if(numero[i] != '-'){
        throw invalid_argument("Argumento inválido. ");
    }
    i++;

    for(j = 0; j < (int)(sizeof(digitosVerificadoresPossiveis)/sizeof(*digitosVerificadoresPossiveis)); j++){
        if(numero[i] == digitosVerificadoresPossiveis[j][0]){
            cont++;
        }
    }

    if(!cont){
        throw invalid_argument("Argumento inválido. ");
    }

    // Algoritmo de verificaçao do BB//
    cont = 0;

    for(i = 0, j = 7; i < (QUANTIDADE_DIGITOS_NUMERO - 2); i++,j--){
            cont += (((int)numero[i] - '0')) * j;
    }

    if((cont % 11) == 10){
        if(numero[QUANTIDADE_DIGITOS_NUMERO - 1] != 'X'){
            throw invalid_argument("Argumento inválido. ");
        }
    }
    else{
        if((numero[QUANTIDADE_DIGITOS_NUMERO - 1] - '0') != (cont % 11)){
            throw invalid_argument("Argumento inválido. ");
        }
    }
}

void Numero::setNumero(string numeroConta){
    validar(numeroConta);
    this->numeroConta = numeroConta;
}

Numero::~Numero(){
    quantidadeNumeros--;
}

// -> Prazo <- //
Prazo::Prazo(){
    quantidadePrazos++;
}

void Prazo::validar(int prazo){
    int i;
    int cont = 0;

    for(i = 0; i < (int)(sizeof(prazosPossiveis)/sizeof(*prazosPossiveis)); i++){
        if(prazo == prazosPossiveis[i]){
            cont++;
            return;
        }
    }

    if(!cont){
        throw invalid_argument("Argumento inválido. ");
    }
}

void Prazo::setPrazo(int valorPrazo){
    validar(valorPrazo);
    this->valorPrazo = valorPrazo;
}

Prazo::~Prazo(){
    quantidadePrazos--;
}

// -> Senha <- //
Senha::Senha(){
    quantidadeSenhas++;
}

void Senha::validar(string valorSenha){
    int i;
    int j;

    if(valorSenha.size() != QUANTIDADE_DIGITOS_SENHA){
        throw invalid_argument("Argumento inválido. ");
    }

    for(i = 0; i < QUANTIDADE_DIGITOS_SENHA; i++){
        if(!isdigit(valorSenha[i])){
            throw invalid_argument("Argumento inválido. ");
        }
    }

    for(i = 0; i < QUANTIDADE_DIGITOS_SENHA; i++){
        for(j = i + 1; j < QUANTIDADE_DIGITOS_SENHA; j++){
            if(valorSenha[i] == valorSenha[j]){
                throw invalid_argument("Argumento inválido. ");
            }
        }
    }
}

void Senha::setSenha(string numeroSenha){
    validar(numeroSenha);
    this->numeroSenha = numeroSenha;
}

Senha::~Senha(){
    quantidadeSenhas--;
}

// -> Taxa <- //
Taxa::Taxa(){
    quantidadeTaxas++;
}

void Taxa::validar(int taxa){
    if(taxa < minTaxaPossivel || taxa > maxTaxaPossivel){
        throw invalid_argument("Argumento inválido. ");
    }
}

void Taxa::setTaxa(int valorTaxa){
    validar(valorTaxa);
    this->valorTaxa = valorTaxa;
}

Taxa::~Taxa(){
    quantidadeTaxas--;
}

// -> Valor de Aplicação <- //
ValorDeAplicacao::ValorDeAplicacao(){
    quantidadeValoresAplicacao++;
}

void ValorDeAplicacao::validar(int aplicacao){
    if(aplicacao < minValorAplicacaoPossivel || aplicacao > maxValorAplicacaoPossivel){
        throw invalid_argument("Argumento inválido. ");
    }
}

void ValorDeAplicacao::setValorDeAplicacao(int valorAplicacao){
    validar(valorAplicacao);
    this->valorAplicacao = valorAplicacao;
}

ValorDeAplicacao::~ValorDeAplicacao(){
    quantidadeValoresAplicacao--;
}

// -> Valor Minimo <- //
ValorMinimo::ValorMinimo(){
    quantidadeValoresMinimos++;
}

void ValorMinimo::validar(int minimo){
    int i;
    int cont = 0;

    for(i = 0; i < (int)(sizeof(valoresMinimosPossiveis)/sizeof(*valoresMinimosPossiveis)); i++){
        if(minimo == valoresMinimosPossiveis[i]){
            cont++;
        }
    }

    if(!cont){
        throw invalid_argument("Argumento inválido. ");
    }
}

void ValorMinimo::setValorMinimo(int valorMin){
    validar(valorMin);
    this->valorMin = valorMin;
}

ValorMinimo::~ValorMinimo(){
    quantidadeValoresMinimos--;
}
