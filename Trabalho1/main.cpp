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
        case TesteUnitarioCodigoAgencia::SUCESSO: cout << "Codigo de Ag�ncia: SUCESSO" << endl;
                                                  break;
        case TesteUnitarioCodigoAgencia::FALHA: cout << "C�digo de Ag�ncia: FALHA" << endl;
                                                break;
    }

    switch (testeCodigoAplicacao.run()){
        case TesteUnitarioCodigoAplicacao::SUCESSO: cout << "Codigo de Aplica��o: SUCESSO" << endl;
                                                    break;
        case TesteUnitarioCodigoAplicacao::FALHA: cout << "C�digo de Aplica��o: FALHA" << endl;
                                                  break;
    }

    return 0;
}
