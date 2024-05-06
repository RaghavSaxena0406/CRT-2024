#include<iostream>
#define v 5;
using namespace std;
void init(int arr[][]){
    int r,c;
    for(r=0; r<v; r++){
        for(c=0; c<v; c++){
            arr[r][c]=0;
        }
    }
}

void insertEdge(int arr[v][v], int i, int j){
    arr[i][j] = 1;
    arr[j][i] = 1;
}

void printAdjMatrix(int arr[v][v]){
    int r,c;
    for(r=0; r<v; r++){
        cout << r << " ";
        for(c=0; c<v; c++){
            cout << arr[r][c] << " ";
        }cout << endl;
    }
}

int main(){
    int adjMatrix[v][v];
    init(adjMatrix);
    insertEdge(adjMatrix, 0, 1);
    insertEdge(adjMatrix, 0, 2);
    insertEdge(adjMatrix, 1, 2);
    insertEdge(adjMatrix, 2, 0);
    insertEdge(adjMatrix, 2, 3);

}