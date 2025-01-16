#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Array.hpp"
#include "Array.tpp"

#define MAX_VAL 100
int main(void){

    srand(time(NULL));

    std::cout << "\033[1;32m" << "=== Testing with an empty Array ===" << std::endl;
    Array<int> emptyArray;
    std::cout << "\033[1;36m" << "emptyArray.size() = " << "\033[0;36m" << emptyArray.size() << "\033[0m" << std::endl;

    std::cout << "\033[1;32m" << "=== Initializing an Array of int ===" << std::endl;
    Array<int> intArray(6);
    for (unsigned int i = 0; i < intArray.size(); i++) {
        intArray[i] = rand() % MAX_VAL;
    }
    for (unsigned int i = 0; i < intArray.size(); i++) {
        std::cout << "\033[1;36m" << "intArray[" << i << "] = " << "\033[0;36m" << intArray[i] << "\033[0m" << std::endl;
    }

    std::cout << std::endl << "\033[1;32m" << "=== Copying the Array of int ===" << std::endl;
    Array<int> copiedArray(intArray);
    for (unsigned int i = 0; i < copiedArray.size(); i++) {
        std::cout << "\033[1;36m" << "copiedArray[" << i << "] = " << "\033[0;36m" << copiedArray[i] << "\033[0m" << std::endl;
    }
    std::cout << std::endl << "\033[1;32m" << "=== Modifying the copied Array of int ===" << std::endl;
    std::cout << "\033[1;33m" << "Before: " << std::endl;
    std::cout << "\033[1;36m" << "intArray[5] = " << "\033[0;36m" << intArray[5] << std::endl;
    std::cout << "\033[1;36m" << "copiedArray[5] = " << "\033[0;36m" << copiedArray[5] << std::endl;
    std::cout << "\033[1;33m" << "After: " << std::endl;
    copiedArray[5] = 42;
    std::cout << "\033[1;36m" << "intArray[5] = " << "\033[0;36m" << intArray[5] << std::endl;
    std::cout << "\033[1;36m" << "copiedArray[5] = " << "\033[0;36m" << copiedArray[5] << std::endl << std::endl;

    std::cout << "\033[1;32m" << "=== Assigning the copied Array of int ===" << std::endl;
    Array<int> assignedArray;
    assignedArray = copiedArray;
    for (unsigned int i = 0; i < assignedArray.size(); i++) {
        std::cout << "\033[1;36m" << "assignedArray[" << i << "] = " << "\033[0;36m" << assignedArray[i] << std::endl;
    }
    std::cout << std::endl << "\033[1;32m" << "=== Modifying the assigned Array of int ===" << std::endl;
    std::cout << "\033[1;33m" << "Before: " << std::endl;
    std::cout << "\033[1;36m" << "assignedArray[5] = " << "\033[0;36m" << assignedArray[5] << std::endl;
    std::cout << "\033[1;36m" << "copiedArray[5] = " << "\033[0;36m" << copiedArray[5] << std::endl;
    std::cout << "\033[1;33m" << "After: " << std::endl;
    assignedArray[5] = 15;
    std::cout << "\033[1;36m" << "assignedArray[5] = " << "\033[0;36m" << assignedArray[5] << std::endl;
    std::cout << "\033[1;36m" << "copiedArray[5] = " << "\033[0;36m" << copiedArray[5] << std::endl << std::endl;

    std::cout << "\033[1;32m" << "=== Initializing an Array of float ===" << std::endl;
    Array<float> floatArray(6);
    for (unsigned int i = 0; i < floatArray.size(); i++) {
        floatArray[i] = static_cast<float>(rand() % MAX_VAL) + static_cast<float>(rand() % MAX_VAL) / 100;
    }
    for (unsigned int i = 0; i < floatArray.size(); i++) {
        std::cout << "\033[1;36m" << "floatArray[" << i << "] = " << "\033[0;36m" << floatArray[i] << "\033[0m" << std::endl << std::endl;
    }

    std::cout << "\033[1;32m" << "=== Initializing an Array of string ===" << std::endl;
    Array<std::string> stringArray(6);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "!";
    stringArray[3] = "How";
    stringArray[4] = "are";
    stringArray[5] = "you?";
    for (unsigned int i = 0; i < stringArray.size(); i++) {
        std::cout << "\033[1;36m" << "stringArray[" << i << "] = " << "\033[0;36m" << stringArray[i] << "\033[0m" << std::endl << std::endl; 
    }

    std::cout << "\033[1;32m" << "=== Initializing an Array of char ===" << std::endl;
    Array<char> charArray(6);
    for (unsigned int i = 0; i < charArray.size(); i++) {
        charArray[i] = static_cast<char>(rand() % 26 + 65);
    }
    for (unsigned int i = 0; i < charArray.size(); i++) {
        std::cout << "\033[1;36m" << "charArray[" << i << "] = " << "\033[0;36m" << charArray[i] << "\033[0m" << std::endl << std::endl;
    }

    std::cout << "\033[1;32m" << "=== Testing out of range ===" << std::endl;
    std::cout << "\033[1;33m" << "Trying to access intArray[MAX_VAL]:" << std::endl;
    try {
        std::cout << "\033[1;36m" << "intArray[MAX_VAL] = " << "\033[0;36m" << intArray[MAX_VAL] << "\033[0m" << std::endl;
    } catch (std::exception &e) {
        std::cerr << "\033[1;31m" << "Error: " << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "\033[1;33m" << "Trying to access intArray[-1]:" << std::endl;
    try {
        std::cout << "\033[1;36m" << "intArray[-1] = " << "\033[0;36m" << intArray[-1] << "\033[0m" << std::endl;
    } catch (std::exception &e) {
        std::cerr << "\033[1;31m" << "Error: " << e.what() << "\033[0m" << std::endl;
    }

    
};