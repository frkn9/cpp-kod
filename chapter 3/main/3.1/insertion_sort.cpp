#include <iostream>

void insertionSort(char* A, int n) {                //sort an array of n characters
    for(int i = 1; i < n; i++) {                    //insertion loop
        char cur = A[i];                            //current character to insert
        int j = i - 1;                              //while A[j] is out of order 
        while((j >= 0) && (A[j] > cur)) {           //move A[j] right
            A[j+1] = A[j];                          //decrement j
            j--;
        }
        A[j+1] = cur;                               //this is the proper place for cur
    }
    
}

int main(void) {



}