#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void randomizer(vector<int>& a) {                                   //shuffles numbers in an array

    for(int i = a.size()-1; i > 0; i--) {               
        int r = rand() % (i+1);                   //r = 1 le 52 arası
        int temp = a[i];                          //temp = a 51 
        a[i] = a[r];                              //a 51 = r
        a[r] = temp;                              //a r = temp
    }

}

int main(void) {



}