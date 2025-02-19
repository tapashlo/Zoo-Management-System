/*
Tapash Adhikari
G01131831*/

#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile : public Animal {
public:
    Reptile(std::string name, int age, std::string species)
        : Animal(name, age, species) {} // Call the base class constructor

    void speak() const override {
        std::cout << "I am a reptile named " << getName() << "!" << std::endl;
    }
};

#endif
