/*
Tapash Adhikari
G01131831*/

#ifndef ZOO_H
#define ZOO_H

#include "Animal.h"
#include <vector>

class Zoo {
public:
    // Constructor to initialize the zoo
    Zoo();

    // Destructor to free memory for all animals in the zoo
    ~Zoo();

    // Add a new animal to the zoo
    void addAnimal(Animal* animal);

    // Display all animals in the zoo
    void displayAnimals() const;

    // Save the zoo's animals to a file
    void saveToFile() const;

    // Load the zoo's animals from a file
    void loadFromFile();

private:
    std::vector<Animal*> animals;  // List to store all animals in the zoo
};

#endif // ZOO_H
