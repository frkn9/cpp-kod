#include <iostream>

using namespace std;

void printArray(int** A, int m, int n);

void printArray(int** A, int m, int n) {


    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << A[i][j] << endl;
        }
    cout << endl;
    }



}