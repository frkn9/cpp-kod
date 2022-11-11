#include <iostream>

using namespace std;

int main(void) {
    int a;
    cin >> a;
    int k = 0;
    a--;
    for( ; a != 0 ; a-- ) {
        k += a;    
    }
    cout << k << endl;
}