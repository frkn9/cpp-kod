#include <iostream>

using namespace std;

bool isMultiple(long n, long m);


int main(void) {
    long n;
    long m;

    cin >> n >> m;

    cout << isMultiple(n, m) << endl;
}

bool isMultiple(long n, long m) {
    if(n % m == 0)
        return true;
    else 
        return false;
}