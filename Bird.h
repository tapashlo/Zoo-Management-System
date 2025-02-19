/*
Tapash Adhikari
G01131831*/

#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
public:
    Bird(std::string name, int age, std::string species)
        : Animal(name, age, species) {} // Call the base class constructor

    void speak() const override {
        std::cout << "I am a bird named " << getName() << "!" << std::endl;
    }
};

#endif
