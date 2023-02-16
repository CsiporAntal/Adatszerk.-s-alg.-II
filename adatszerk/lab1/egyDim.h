//
// Created by tonic on 2023. 02. 16..
//

#ifndef LAB1_EGYDIM_H
#define LAB1_EGYDIM_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>


using namespace std;



int *initializeArray(int numberOfElements);
void readArray(int *&array, int & numberOfElements, char
input[20]);
void printArray(int *array, int numberOfElements);
void printReverseArray(int *array, int numberOfElements);
void printArrayToFile(int *array, int numberOfElements, char destination[20]);
void sortArray(int *array, int numberOfElements);


#endif //LAB1_EGYDIM_H
