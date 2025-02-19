/*
Tapash Adhikari
G01131831*/


#include "Zoo.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"

// Constructor
Zoo::Zoo() {}

// Destructor
Zoo::~Zoo() {
    // Delete all dynamically allocated animals
    for (auto animal : animals) {
        delete animal;
    }
}

// Add a new animal to the zoo
void Zoo::addAnimal(Animal* animal) {
    animals.push_back(animal);
}

// Display all animals in the zoo
void Zoo::displayAnimals() const {
    for (const auto& animal : animals) {
        std::cout << "Animal Name: " << animal->getName() << std::endl;
        animal->speak();
    }
}

// Save the zoo's animals to a file
void Zoo::saveToFile() const {
    std::ofstream outFile("zoo.txt");
    if (!outFile) {
        std::cout << "Error opening file!" << std::endl;
        return;
    }

    // Write each animal's name and species to the file
    for (const auto& animal : animals) {
        outFile << animal->getName() << std::endl;
        outFile << animal->getSpecies() << std::endl;
    }

    outFile.close();
}

// Load the zoo's animals from a file
void Zoo::loadFromFile() {
    std::ifstream inFile("zoo.txt");
    if (!inFile) {
        std::cout << "Error opening file!" << std::endl;
        return;
    }

    std::string name, species;
    int age;
    
    // Clear any existing animals before loading new ones
    for (auto animal : animals) {
        delete animal;
    }
    animals.clear();

    // Read animals from the file and create corresponding objects
    while (std::getline(inFile, name) && std::getline(inFile, species)) {
        // For simplicity, we can assume a default age of 5 for every animal
        age = 5;
        if (species == "Mammal") {
            addAnimal(new Mammal(name, age, species));
        } else if (species == "Bird") {
            addAnimal(new Bird(name, age, species));
        } else if (species == "Reptile") {
            addAnimal(new Reptile(name, age, species));
        }
    }

    inFile.close();
}
