#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal 
{
    public:
        std::string idade;
        std::string familia;
        std::string nome;

        virtual void print();
        void setFamilia(std::string _familia);
};

#endif
