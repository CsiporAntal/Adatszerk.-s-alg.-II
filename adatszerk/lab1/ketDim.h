//
// Created by tonic on 2023. 02. 16..
//

#ifndef LAB1_KETDIM_H
#define LAB1_KETDIM_H
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;


int **initializeMatrix(int numberOfRows, int numberOfColumns);
void readMatrix(int **&matrix, int & numberOfRows, int &
numberOfColumns, char input[20]);
void printMatrix(int **matrix, int numberOfRows, int
numberOfColumns);

#endif //LAB1_KETDIM_H
