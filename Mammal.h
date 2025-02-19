/*
Tapash Adhikari
G01131831*/

#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
public:
    Mammal(std::string name, int age, std::string species)
        : Animal(name, age, species) {} // Call the base class constructor

    void speak() const override {
        std::cout << "I am a mammal named " << getName() << "!" << std::endl;
    }
};

#endif
