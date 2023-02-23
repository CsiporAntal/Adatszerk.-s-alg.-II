//
// Created by tonic on 2023. 02. 23..
//

#include "../headers/Ellista.h"


vector <EDGE> edgeListFromFile(char*input) {
    std::fstream in(input);
    if (!in){
        printf(FILE_OPEN_ERROR_MESSAGE);
        exit (FILE_OPEN_ERROR_CODE);
    }
    vector<EDGE> edges;
    int numberOfEdges;
    int numberOfPoint;
    int p1,p2;
    in >> numberOfPoint;
    in >> numberOfEdges;
    for (int i = 1; i < numberOfPoint; ++i) {
        in >> p1;
        in >> p2;
        edges.push_back({p1,p2});
    }
    return edges;
}

void printEdgeList(vector <EDGE> Edges, char *output) {
    std::ofstream out(output);
    if (!out){
        printf(FILE_OPEN_ERROR_MESSAGE);
        exit (FILE_OPEN_ERROR_CODE);
    }
    for (auto a: Edges){
        out << a.b << a.e << " ";
    }
}

int **initializeAdjacencyMatrix(int numberOfRows, int numberOfColumns) {
    int **temp=new int * [numberOfRows+1];
    if (!**temp){
        cout<<MEMORY_ALLOCATIPON_ERROR_MESSAGE;
        std::exit(MEMORY_ALLOCATIPON_ERROR_CODE);
    }
    for (int i = 0; i < numberOfRows+1; i++) {
        temp[i]=new int[numberOfColumns+1];
        if (!*temp[i]){
            cout<<MEMORY_ALLOCATIPON_ERROR_MESSAGE;
            std::exit(MEMORY_ALLOCATIPON_ERROR_CODE);
        }
    }
    for (int i = 0; i < numberOfRows+1; ++i) {
        for (int j = 0; j < numberOfColumns+1; ++j) {
            temp[i][j]=0;
        }
    }
    return temp;
}

void readAdjacencyMatrix(int **&matrix, int &numberOfRows, char *input) {
 std::ifstream in(input);
    if (!in){
        printf(FILE_OPEN_ERROR_MESSAGE);
        exit (FILE_OPEN_ERROR_CODE);
    }
    int numberOfPoits,numberOfEdges;
    int p1,p2;
    vector<EDGE> edges;
    in >> numberOfPoits,numberOfEdges;
    matrix= initializeAdjacencyMatrix(numberOfRows,numberOfRows);
    for (int i=0;i <= numberOfEdges;++i){
        in >> p1 >> p2;
        matrix[p1][p2] = 1;
    }
}

void printAdjacencyMatrix(int **matrix, int numberOfRows, char *output) {
    ofstream out(output);
    if(out.fail()){
        cout<<FILE_OPEN_ERROR_MESSAGE;
        exit(FILE_OPEN_ERROR_CODE);
    }

    for (int i = 1; i <= numberOfRows; ++i) {
        for (int j = 1; j <= numberOfRows; ++j) {
            out<<matrix[i][j]<<" ";
        }
        out<<endl;
    }
    out<<endl;
}
