#include <iostream>
#include <vector>

using namespace std;

bool foo(int a[], int n) {

    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++) {
            if( i != j && (a[j] - a[i]) == 0)
                return false;
        }
    }

    return true;
}

int main(void) {

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << foo(a, 10) << endl;

}