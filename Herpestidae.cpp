#include "Herpestidae.hpp"

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas)
{
    return porcoesConsumidas;
}
void Herpestidae::print()
{
    this->setFamilia("Herpestidae");
    this->Animal::print();
    std::cout << " Especie: " << this->especie << std::endl;
}
