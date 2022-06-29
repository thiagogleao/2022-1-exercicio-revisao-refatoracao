
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"
#include <iostream>

class Alimentacao{

    public:
    int porcao;
    string comida;
    string descricao;
    Cuidador cuid;
    string nomeAnimal;

    void print();
};

#endif
