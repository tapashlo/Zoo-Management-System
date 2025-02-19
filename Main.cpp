/*
Tapash Adhikari
G01131831*/

#include <iostream>
#include <string>
#include "Zoo.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"

int main() {
    Zoo zoo;

    int choice;
    do {
        std::cout << "1. Add a Mammal\n";
        std::cout << "2. Add a Bird\n";
        std::cout << "3. Add a Reptile\n";
        std::cout << "4. Display Animals\n";
        std::cout << "5. Save Animals to File\n";
        std::cout << "6. Load Animals from File\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore();  // Clear the input buffer

        std::string name, species;
        int age;

        Animal* newAnimal = nullptr;

        switch (choice) {
        case 1:
            std::cout << "Enter name of Mammal: ";
            std::getline(std::cin, name);
            std::cout << "Enter species: ";
            std::getline(std::cin, species);
            newAnimal = new Mammal(name, 5, species);  // Default age = 5
            zoo.addAnimal(newAnimal);
            break;
        case 2:
            std::cout << "Enter name of Bird: ";
            std::getline(std::cin, name);
            std::cout << "Enter species: ";
            std::getline(std::cin, species);
            newAnimal = new Bird(name, 5, species);  // Default age = 5
            zoo.addAnimal(newAnimal);
            break;
        case 3:
            std::cout << "Enter name of Reptile: ";
            std::getline(std::cin, name);
            std::cout << "Enter species: ";
            std::getline(std::cin, species);
            newAnimal = new Reptile(name, 5, species);  // Default age = 5
            zoo.addAnimal(newAnimal);
            break;
        case 4:
            zoo.displayAnimals();
            break;
        case 5:
            zoo.saveToFile();
            break;
        case 6:
            zoo.loadFromFile();
            break;
        case 7:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 7);

    return 0;
}
