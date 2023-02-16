//
// Created by tonic on 2023. 02. 16..
//

#include "egyDim.h"

int *initializeArray(int numberOfElements){
    int *temp=new int[numberOfElements];
    if (!*temp){
        std::cout<<"Error allocation\n";
        exit (EXIT_FAILURE);
    }

    return temp;
}

void readArray(int *&array, int & numberOfElements, char
input[20]){
    std::ifstream in(input);
    if (!in){
        std::cout<<"Error opening file\n";
        exit (EXIT_FAILURE);
    }
    in >> numberOfElements;
    array= initializeArray(numberOfElements);
    for (int i=0;i<numberOfElements;++i){
        in >> array[i];
    }
}

void printArray(int *array, int numberOfElements){
    for (int i = 0; i < numberOfElements; ++i) {
        cout << array[i] << endl;
    }
}

void printReverseArray(int *array, int numberOfElements){
    for (int i = numberOfElements-1; i >= 0; --i) {
        cout << array[i] << endl;
    }

}

void printArrayToFile(int *array, int numberOfElements, char destination[20]){
    std::ofstream out(destination);
    if (!out){
        std::cout<<"Error opening file\n";
        exit (EXIT_FAILURE);
    }
    out << numberOfElements;
    for (int i=0;i<numberOfElements;++i){
        out << array[i] << ", ";
    }
}





