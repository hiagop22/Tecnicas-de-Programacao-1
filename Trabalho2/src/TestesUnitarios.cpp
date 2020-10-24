#include "TestesUnitarios.h"
#include <iostream>
#include <stdexcept>

using namespace std;

// ----------------- Inicialização de atributos estáticos ----------------- //
// -> Classe <- //
const string TesteUnitarioClasse::NOME_CLASSE_VALIDO = "CDB";
const string TesteUnitarioClasse::NOME_CLASSE_INVALIDO = "ETF";

// -> Código de Agencia <- //
const string TesteUnitarioCodigoAgencia::CODIGO_AGENCIA_VALIDO = "1234";
const string TesteUnitarioCodigoAgencia::CODIGO_AGENCIA_INVALIDO = "0000";

// -> Código de Aplicacão <- //
const string TesteUnitarioCodigoAplicacao::CODIGO_APLICACAO_VALIDO = "12345";
const string TesteUnitarioCodigoAplicacao::CODIGO_APLICACAO_INVALIDO = "00000";

// -> Código de Banco <- //
const string TesteUnitarioCodigoBanco::CODIGO_BANCO_VALIDO = "033";
const string TesteUnitarioCodigoBanco::CODIGO_BANCO_INVALIDO = "003";

// -> Código de Produto <- //
const string TesteUnitarioCodigoProduto::CODIGO_PRODUTO_VALIDO = "033";
const string TesteUnitarioCodigoProduto::CODIGO_PRODUTO_INVALIDO = "000";

// -> CPF <- //
const string TesteUnitarioCpf::NUMERO_CPF_VALIDO = "529.982.247-25";
const string TesteUnitarioCpf::NUMERO_CPF_INVALIDO = "000.000.000-00";

// -> Data <- //
const string TesteUnitarioData::NUMERO_DATA_VALIDO = "10/10/2020";
const string TesteUnitarioData::NUMERO_DATA_INVALIDO = "32/13/2010";

// -> Emissor <- //
const string TesteUnitarioEmissor::NOME_EMISSOR_VALIDO = "Hiago16012";
const string TesteUnitarioEmissor::NOME_EMISSOR_INVALIDO = "hi..";

// -> Endereco <- //
const string TesteUnitarioEndereco::ENDERECO_VALIDO = "Rua 01 Numero 15";
const string TesteUnitarioEndereco::ENDERECO_INVALIDO = "rua";

// -> Horario <- //
const string TesteUnitarioHorario::HORARIO_VALIDO = "14:45";
const string TesteUnitarioHorario::HORARIO_INVALIDO = "12:00";

// -> Nome <- //
const string TesteUnitarioNome::NOME_VALIDO = "Maicon Junior";
const string TesteUnitarioNome::NOME_INVALIDO = "joão silva";

// -> Numero <- //
const string TesteUnitarioNumero::NUMERO_VALIDO = "506323-1";
const string TesteUnitarioNumero::NUMERO_INVALIDO = "506323-0";

// -> Prazo <- //
const int TesteUnitarioPrazo::PRAZO_VALIDO = 24;
const int TesteUnitarioPrazo::PRAZO_INVALIDO = 23;

// -> Senha <- //
const string TesteUnitarioSenha::SENHA_VALIDA = "012345";
const string TesteUnitarioSenha::SENHA_INVALIDA = "abc123";

// -> Taxa <- //
const int TesteUnitarioTaxa::TAXA_VALIDA = 15;
const int TesteUnitarioTaxa::TAXA_INVALIDA = 215;

// -> Valor de Aplicaçao <- //
const int TesteUnitarioValorAplicacao::VALOR_APLICACAO_VALIDO = 5000;
const int TesteUnitarioValorAplicacao::VALOR_APLICACAO_INVALIDO = 5000000;

// -> Valor Minimo <- //
const int TesteUnitarioValorMinimo::VALOR_MINIMO_VALIDO = 1000;
const int TesteUnitarioValorMinimo::VALOR_MINIMO_INVALIDO = 2000;

// ----------------- Definição de métodos ----------------- //

// -> Cep <- //
void TesteUnitarioCep::setUp(){
    cep = new Cep();
    estado = SUCESSO;
}

void TesteUnitarioCep::tearDown(){
    delete cep;
}

void TesteUnitarioCep::testarCenarioSucesso(){
    try{
        cep->setCep(NUMERO_CEP_VALIDO);
        if(cep->getCep() != NUMERO_CEP_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCep::testarCenarioFalha(){
    try{
    cep->setCep(NUMERO_CEP_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCep::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}


// -> Classe <- //
void TesteUnitarioClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}

void TesteUnitarioClasse::tearDown(){
    delete classe;
}

void TesteUnitarioClasse::testarCenarioSucesso(){
    try{
        classe->setClasse(NOME_CLASSE_VALIDO);
        if(classe->getClasse() != NOME_CLASSE_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioClasse::testarCenarioFalha(){
    try{
        classe->setClasse(NOME_CLASSE_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Código de Agencia <- //
void TesteUnitarioCodigoAgencia::setUp(){
    codigoAgencia = new CodigoAgencia();
    estado = SUCESSO;
}

void TesteUnitarioCodigoAgencia::tearDown(){
    delete codigoAgencia;
}

void TesteUnitarioCodigoAgencia::testarCenarioSucesso(){
    try{
        codigoAgencia->setCodigoAgencia(CODIGO_AGENCIA_VALIDO);
        if(codigoAgencia->getCodigoAgencia() != CODIGO_AGENCIA_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCodigoAgencia::testarCenarioFalha(){
    try{
        codigoAgencia->setCodigoAgencia(CODIGO_AGENCIA_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCodigoAgencia::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Código de Aplicação <- //
void TesteUnitarioCodigoAplicacao::setUp(){
    codigoAplicacao = new CodigoAplicacao();
    estado = SUCESSO;
}

void TesteUnitarioCodigoAplicacao::tearDown(){
    delete codigoAplicacao;
}

void TesteUnitarioCodigoAplicacao::testarCenarioSucesso(){
    try{
        codigoAplicacao->setCodigoAplicacao(CODIGO_APLICACAO_VALIDO);
        if(codigoAplicacao->getCodigoAplicacao() != CODIGO_APLICACAO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCodigoAplicacao::testarCenarioFalha(){
    try{
        codigoAplicacao->setCodigoAplicacao(CODIGO_APLICACAO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCodigoAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Código de Banco <- //
void TesteUnitarioCodigoBanco::setUp(){
    codigoBanco = new CodigoBanco();
    estado = SUCESSO;
}

void TesteUnitarioCodigoBanco::tearDown(){
    delete codigoBanco;
}

void TesteUnitarioCodigoBanco::testarCenarioSucesso(){
    try{
        codigoBanco->setCodigoBanco(CODIGO_BANCO_VALIDO);
        if(codigoBanco->getCodigoBanco() != CODIGO_BANCO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCodigoBanco::testarCenarioFalha(){
    try{
        codigoBanco->setCodigoBanco(CODIGO_BANCO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCodigoBanco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Código de Produto <- //
void TesteUnitarioCodigoProduto::setUp(){
    codigoProduto = new CodigoProduto();
    estado = SUCESSO;
}

void TesteUnitarioCodigoProduto::tearDown(){
    delete codigoProduto;
}

void TesteUnitarioCodigoProduto::testarCenarioSucesso(){
    try{
        codigoProduto->setCodigoProduto(CODIGO_PRODUTO_VALIDO);
        if(codigoProduto->getCodigoProduto() != CODIGO_PRODUTO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCodigoProduto::testarCenarioFalha(){
    try{
        codigoProduto->setCodigoProduto(CODIGO_PRODUTO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCodigoProduto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Cpf <- //
void TesteUnitarioCpf::setUp(){
    cpf = new Cpf();
    estado = SUCESSO;
}

void TesteUnitarioCpf::tearDown(){
    delete cpf;
}

void TesteUnitarioCpf::testarCenarioSucesso(){
    try{
        cpf->setNumeroCpf(NUMERO_CPF_VALIDO);
        if(cpf->getNumeroCpf() != NUMERO_CPF_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioCpf::testarCenarioFalha(){
    try{
        cpf->setNumeroCpf(NUMERO_CPF_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioCpf::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Data <- //
void TesteUnitarioData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TesteUnitarioData::tearDown(){
    delete data;
}

void TesteUnitarioData::testarCenarioSucesso(){
    try{
        data->setNumeroData(NUMERO_DATA_VALIDO);
        if(data->getNumeroData() != NUMERO_DATA_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioData::testarCenarioFalha(){
    try{
        data->setNumeroData(NUMERO_DATA_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Emissor <- //
void TesteUnitarioEmissor::setUp(){
    emissor = new Emissor();
    estado = SUCESSO;
}

void TesteUnitarioEmissor::tearDown(){
    delete emissor;
}

void TesteUnitarioEmissor::testarCenarioSucesso(){
    try{
        emissor->setNomeEmissor(NOME_EMISSOR_VALIDO);
        if(emissor->getNomeEmissor() != NOME_EMISSOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excessao){
        estado = FALHA;
    }
}

void TesteUnitarioEmissor::testarCenarioFalha(){
    try{
        emissor->setNomeEmissor(NOME_EMISSOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excessao){
        return;
    }
}

int TesteUnitarioEmissor::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}


// -> Endereco <- //
void TesteUnitarioEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}

void TesteUnitarioEndereco::tearDown(){
    delete endereco;
}

void TesteUnitarioEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(ENDERECO_VALIDO);
        if(endereco->getEndereco() != ENDERECO_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
            estado = FALHA;
    }
}

void TesteUnitarioEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(ENDERECO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteUnitarioEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Horario <- //
void TesteUnitarioHorario::setUp(){
    horario = new Horario();
    estado = SUCESSO;
}

void TesteUnitarioHorario::tearDown(){
    delete horario;
}

void TesteUnitarioHorario::testarCenarioSucesso(){
    try{
        horario->setHorario(HORARIO_VALIDO);
        if(horario->getHorario() != HORARIO_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteUnitarioHorario::testarCenarioFalha(){
    try{
        horario->setHorario(HORARIO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteUnitarioHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Nome <- //
void TesteUnitarioNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TesteUnitarioNome::tearDown(){
    delete nome;
}

void TesteUnitarioNome::testarCenarioSucesso(){
    try{
        nome->setNome(NOME_VALIDO);
        if(nome->getNome() != NOME_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteUnitarioNome::testarCenarioFalha(){
    try{
        nome->setNome(NOME_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteUnitarioNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Numero <-//
void TesteUnitarioNumero::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TesteUnitarioNumero::tearDown(){
    delete numero;
}

void TesteUnitarioNumero::testarCenarioSucesso(){
    try{
        numero->setNumero(NUMERO_VALIDO);
        if(numero->getNumero() != NUMERO_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteUnitarioNumero::testarCenarioFalha(){
    try{
        numero->setNumero(NUMERO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteUnitarioNumero::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Prazo <- //
void TesteUnitarioPrazo::setUp(){
    prazo = new Prazo();
    estado = SUCESSO;
}

void TesteUnitarioPrazo::tearDown(){
    delete prazo;
}

void TesteUnitarioPrazo::testarCenarioSucesso(){
    try{
        prazo->setPrazo(PRAZO_VALIDO);
        if(prazo->getPrazo() != PRAZO_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteUnitarioPrazo::testarCenarioFalha(){
    try{
        prazo->setPrazo(PRAZO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteUnitarioPrazo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Senha <- //
void TesteUnitarioSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TesteUnitarioSenha::tearDown(){
    delete senha;
}

void TesteUnitarioSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(SENHA_VALIDA);
        if(senha->getSenha() != SENHA_VALIDA){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteUnitarioSenha::testarCenarioFalha(){
    try{
        senha->setSenha(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteUnitarioSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Taxa <- //
void TesteUnitarioTaxa::setUp(){
    taxa = new Taxa();
    estado = SUCESSO;
}

void TesteUnitarioTaxa::tearDown(){
    delete taxa;
}

void TesteUnitarioTaxa::testarCenarioSucesso(){
    try{
        taxa->setTaxa(TAXA_VALIDA);
        if(taxa->getTaxa() != TAXA_VALIDA){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteUnitarioTaxa::testarCenarioFalha(){
    try{
        taxa->setTaxa(TAXA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteUnitarioTaxa::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Valor de Aplicacao <- //
void TesteUnitarioValorAplicacao::setUp(){
    valorDeAplicacao = new ValorDeAplicacao();
    estado = SUCESSO;
}

void TesteUnitarioValorAplicacao::tearDown(){
    delete valorDeAplicacao;
}

void TesteUnitarioValorAplicacao::testarCenarioSucesso(){
    try{
        valorDeAplicacao->setValorDeAplicacao(VALOR_APLICACAO_VALIDO);
        if(valorDeAplicacao->getValorDeAplicacao() != VALOR_APLICACAO_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteUnitarioValorAplicacao::testarCenarioFalha(){
    try{
        valorDeAplicacao->setValorDeAplicacao(VALOR_APLICACAO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteUnitarioValorAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// -> Valor Minimo <- //
void TesteUnitarioValorMinimo::setUp(){
    valorMinimo = new ValorMinimo();
    estado = SUCESSO;
}

void TesteUnitarioValorMinimo::tearDown(){
    delete valorMinimo;
}

void TesteUnitarioValorMinimo::testarCenarioSucesso(){
    try{
        valorMinimo->setValorMinimo(VALOR_MINIMO_VALIDO);
        if(valorMinimo->getValorMinimo() != VALOR_MINIMO_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TesteUnitarioValorMinimo::testarCenarioFalha(){
    try{
        valorMinimo->setValorMinimo(VALOR_MINIMO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TesteUnitarioValorMinimo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
