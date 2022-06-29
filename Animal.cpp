#include "Animal.hpp"

void Animal::print()
{
    std::cout << std::endl << "[Animal}" << std::endl;
    std::cout << "Nome: " << this->nome << std::endl; 
    std::cout << "Idade: " << this->idade << std::endl; 
    std::cout << "Familia: " << this->familia << std::endl; 
}
void Animal::setFamilia(std::string _familia)
{
    this->familia = familia;
}
