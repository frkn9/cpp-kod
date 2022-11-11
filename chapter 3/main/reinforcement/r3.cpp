#include <iostream>

using namespace std;



int main(void) {

    int n = 3, m = 3;
    int M[n][m] = {{1,4,9}, {2,6,2}, {3,7,4} };
    int temp;

     for(int i = 0; i < n; i++) {
            cout <<  "" << endl;
        for(int j = 0; j < m; j++) {
            cout << M[i][j] << " ";
        }
    }

    cout << "" << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i != j && j > i) {
                temp = M[i][j];
                M[i][j] = M[j][i];
                M[j][i] = temp;
            }
        }
    }

     for(int i = 0; i < n; i++) {
            cout <<  "" << endl;
        for(int j = 0; j < m; j++) {
            cout << M[i][j] << " ";
        }
    }
}