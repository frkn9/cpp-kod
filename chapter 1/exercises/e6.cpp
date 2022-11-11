#include <iostream>

using namespace std;
int main(void) {

    double* dp[10];

    for(int i = 0; i < 10; i++) {
        dp[i] = new double;
        *dp[i] = 0.0;
    }

    for(int i = 0; i < 10; i++) {

        cout << *dp[i] << endl;
    }
}