#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

class Herpestidae : public Animal 
{
    public:
    string especie;
    double kgConsumidosDeRacao(int porcoesConsumidas);
    void print() override;
};

#endif
