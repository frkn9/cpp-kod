#include <iostream>

using namespace std;

int foo(double x) {

    int i = 0;
    for(; x >= 2; i++) {

        x /= 2;
    }

    return i;
}

int main(void) {

    cout << foo(8.9) << endl;
}