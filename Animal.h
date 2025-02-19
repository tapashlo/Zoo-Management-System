/*
Tapash Adhikari
G01131831*/

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal {
protected: // Make members protected so derived classes can access them.
    std::string name;
    int age;
    std::string species;

public:
    Animal(const std::string& name, int age, const std::string& species) 
        : name(name), age(age), species(species) {}

    virtual void speak() const = 0;

    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getSpecies() const { return species; }
};

#endif
