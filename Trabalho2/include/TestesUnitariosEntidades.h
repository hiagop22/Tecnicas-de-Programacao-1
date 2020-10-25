#ifndef TESTESUNITARIOSENTIDADES_H
#define TESTESUNITARIOSENTIDADES_H


class TesteUnitarioEntidade{
protected:
    int estado;

    virtual void setUp() = 0;
    virtual void tearDown() = 0;
    virtual void testarCenarioSucesso();
public:
    const static int SUCESSO = 1;
    const static int FALHA = 0;

    virtual int run() = 0;
};

class TesteUnitarioAplicacao: public TesteUnitarioEntidade{
private:
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};

class TesteUnitarioConta: public TesteUnitarioEntidade{
private:
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};

class TesteUnitarioProduto: public TesteUnitarioEntidade{
private:
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};

class TesteUnitarioUsuario: public TesteUnitarioEntidade{
private:
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    int run();
};


#endif // TESTESUNITARIOSENTIDADES_H
