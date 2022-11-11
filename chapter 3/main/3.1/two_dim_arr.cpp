#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n = 10;
    int m = 5;

    int** M = new int*[n]; // allocate an array of row pointers
    for (int i = 0; i < n; i++)
    M[i] = new int[m]; // allocate the i-th row 

    for (int i = 0; i < n; i++)
        delete[ ] M[i]; // delete the i-th row

    delete[ ] M; // delete the array of row pointers

    int i = 10;
    int j = 5;

    vector< vector<int> > M(n, vector<int>(m));             //n tane vector int olacak onların içine de vector<int> koyulacak m tane
    cout << M[i][j] << endl;
}