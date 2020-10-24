#include <iostream>
#include "Dominios.h"
#include "TestesUnitarios.h"
#include <string>

using namespace std;

int main()
{
    TesteUnitarioCep testeCep;
    TesteUnitarioClasse testeClasse;
    TesteUnitarioCodigoAgencia testeCodigoAgencia;
    TesteUnitarioCodigoAplicacao testeCodigoAplicacao;
    TesteUnitarioCodigoBanco testeCodigoBanco;
    TesteUnitarioCodigoProduto testeCodigoProduto;
    TesteUnitarioCpf testeCpf;
    TesteUnitarioData testeData;
    TesteUnitarioEmissor testeEmissor;
    TesteUnitarioEndereco testeEndereco;
    TesteUnitarioHorario testeHorario;
    TesteUnitarioNome testeNome;
    TesteUnitarioNumero testeNumero;
    TesteUnitarioPrazo testePrazo;
    TesteUnitarioSenha testeSenha;
    TesteUnitarioTaxa testeTaxa;
    TesteUnitarioValorAplicacao testeValorAplicacao;
    TesteUnitarioValorMinimo testeValorMinimo;


    switch (testeCep.run()){
        case TesteUnitarioCep::SUCESSO: cout << "Cep: SUCESSO" << endl;
                                           break;
        case TesteUnitarioCep::FALHA: cout << "Cep: FALHA" << endl;
                                           break;
    }

    switch (testeClasse.run()){
        case TesteUnitarioClasse::SUCESSO: cout << "Classe: SUCESSO" << endl;
                                           break;
        case TesteUnitarioClasse::FALHA: cout << "Classe: FALHA" << endl;
                                           break;
    }

    switch (testeCodigoAgencia.run()){
        case TesteUnitarioCodigoAgencia::SUCESSO: cout << "Codigo de Agencia: SUCESSO" << endl;
                                                  break;
        case TesteUnitarioCodigoAgencia::FALHA: cout << "Codigo de Agencia: FALHA" << endl;
                                                break;
    }

    switch (testeCodigoAplicacao.run()){
        case TesteUnitarioCodigoAplicacao::SUCESSO: cout << "Codigo de Aplicacao: SUCESSO" << endl;
                                                    break;
        case TesteUnitarioCodigoAplicacao::FALHA: cout << "Codigo de Aplicacao: FALHA" << endl;
                                                  break;
    }

    switch (testeCodigoBanco.run()){
        case TesteUnitarioCodigoBanco::SUCESSO: cout << "Codigo de Banco: SUCESSO" << endl;
                                                    break;
        case TesteUnitarioCodigoBanco::FALHA:   cout << "Codigo de Banco: FALHA" << endl;
                                                    break;
    }

    switch (testeCodigoProduto.run()){
        case TesteUnitarioCodigoProduto::SUCESSO: cout << "Codigo de Produto: SUCESSO" << endl;
                                                  break;
        case TesteUnitarioCodigoProduto::FALHA: cout << "Codigo de Produto: FALHA" << endl;
                                                break;
    }

    switch (testeCpf.run()){
        case TesteUnitarioCpf::SUCESSO: cout << "CPF: SUCESSO" << endl;
                                        break;
        case TesteUnitarioCpf::FALHA: cout << "CPF: FALHA" << endl;
                                      break;
    }

    switch (testeData.run()){
        case TesteUnitarioData::SUCESSO: cout << "Data: SUCESSO" << endl;
                                         break;
        case TesteUnitarioData::FALHA: cout << "Data: FALHA" << endl;
                                       break;
    }

    switch (testeEmissor.run()){
        case TesteUnitarioEmissor::SUCESSO: cout << "Emissor: SUCESSO" << endl;
                                            break;
        case TesteUnitarioEmissor::FALHA: cout << "Emissor: FALHA" << endl;
                                          break;
    }

    switch (testeEndereco.run()){
        case TesteUnitarioEndereco::SUCESSO: cout << "Endereco: SUCESSO" << endl;
                                           break;
        case TesteUnitarioEndereco::FALHA: cout << "Endereco: FALHA" << endl;
                                           break;
    }

    switch (testeHorario.run()){
        case TesteUnitarioHorario::SUCESSO: cout << "Horario: SUCESSO" << endl;
                                           break;
        case TesteUnitarioHorario::FALHA: cout << "Horario: FALHA" << endl;
                                           break;
    }

    switch (testeNome.run()){
        case TesteUnitarioNome::SUCESSO: cout << "Nome: SUCESSO" << endl;
                                           break;
        case TesteUnitarioNome::FALHA: cout << "Nome: FALHA" << endl;
                                           break;
    }

    switch (testeNumero.run()){
        case TesteUnitarioNumero::SUCESSO: cout << "Numero: SUCESSO" << endl;
                                           break;
        case TesteUnitarioNumero::FALHA: cout << "Numero: FALHA" << endl;
                                           break;
    }

    switch (testePrazo.run()){
        case TesteUnitarioPrazo::SUCESSO: cout << "Prazo: SUCESSO" << endl;
                                           break;
        case TesteUnitarioPrazo::FALHA: cout << "Prazo: FALHA" << endl;
                                           break;
    }

    switch (testeSenha.run()){
        case TesteUnitarioSenha::SUCESSO: cout << "Senha: SUCESSO" << endl;
                                           break;
        case TesteUnitarioSenha::FALHA: cout << "Senha: FALHA" << endl;
                                           break;
    }

    switch (testeTaxa.run()){
        case TesteUnitarioTaxa::SUCESSO: cout << "Taxa: SUCESSO" << endl;
                                           break;
        case TesteUnitarioTaxa::FALHA: cout << "Taxa: FALHA" << endl;
                                           break;
    }

    switch (testeValorAplicacao.run()){
        case TesteUnitarioValorAplicacao::SUCESSO: cout << "Valor de Aplicacao: SUCESSO" << endl;
                                           break;
        case TesteUnitarioValorAplicacao::FALHA: cout << "Valor de Aplicacao: FALHA" << endl;
                                           break;
    }

    switch (testeValorMinimo.run()){
        case TesteUnitarioValorMinimo::SUCESSO: cout << "Valor Minimo: SUCESSO" << endl;
                                           break;
        case TesteUnitarioValorMinimo::FALHA: cout << "Valor Minimo: FALHA" << endl;
                                           break;
    }

    return 0;
}
