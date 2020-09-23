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

    return 0;
}
