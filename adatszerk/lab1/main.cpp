#include <iostream>
#include <array>
#include "egyDim.h"
#include "ketDim.h"



int main() {

    int n;
    int *array;
    readArray(array,n,"text.txt");
    printArray(array,n);
    printf("\n");
    printReverseArray(array,n);

    printArrayToFile(array,n,"ki.txt");
    /*
    int n=2;
    int m=2;
    int **matrix;
    readMatrix(matrix,n,m,"szamTomb.txt");
    printMatrix(matrix,n,m);

*/
    return 0;
}
