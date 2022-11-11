#include <iostream>

using namespace std;

bool foo(int a[], int n) {

    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++) {
            if( (a[j] * a[i]) % 2 == 0)
                return true;
        }
    }

    return false;
}

int main(void) {

    int a[10] = {1, 1, 3, 1, 5, 1, 1, 1, 1, 1};

    cout << foo(a, 10) << endl;

}