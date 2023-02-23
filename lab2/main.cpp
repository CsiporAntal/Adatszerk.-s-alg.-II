#include <iostream>
#include <vector>
#include "C:\Users\tonic\OneDrive\Documents\adatszerk\lab2\headers\Ellista.h"


using namespace std;

int main()
{
    vector<EDGE> edge = edgeListFromFile("beEllista.txt");
    printEdgeList(edge,"CON");

    int **matrix;
    int numofrows=7;
    readAdjacencyMatrix(matrix,numofrows, "beEllista.txt");
    printAdjacencyMatrix(matrix,numofrows,"CON");


    return 0;
}
