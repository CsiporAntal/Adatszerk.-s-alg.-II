//
// Created by tonic on 2023. 02. 16..
//

#include <iostream>
#include "ketDim.h"

int **initializeMatrix(int numberOfRows, int numberOfColumns){
    int **temp=new int*[numberOfRows];
    for (int i = 0; i < numberOfRows; ++i) {
        temp[i] = new int[numberOfColumns];
    }
    
    if (!*temp){
        std::cout<<"Error allocation\n";
        exit (EXIT_FAILURE);
    }


    return temp;
}
void readMatrix(int **&matrix, int & numberOfRows, int &
numberOfColumns, char input[20]){

    std::ifstream in(input);
    if (!in){
        std::cout<<"Error opening file\n";
        exit (EXIT_FAILURE);
    }
    in >> numberOfRows;
    in >> numberOfColumns;
    matrix= initializeMatrix(numberOfRows,numberOfColumns);
    for (int i=0;i<numberOfRows;++i){
        for (int j = 0; j < numberOfColumns; ++j) {
            in >> matrix[i][j];
        }
    }

}

void printMatrix(int **matrix, int numberOfRows, int
numberOfColumns){
    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            cout << matrix[i][j] << ", ";

        }
        cout <<endl;
    }
}
