#include <iostream>

int main(void) {

    int arr[8] = {1,2,3,3,5,9,9,1};
    int i = 0;
    int count = 1;
    int temp = count;
    for(; i < 8; i++) {
        for(; count < 8; count++) {
            if(arr[i] == arr[count])
                goto found;
        }
        count = ++temp;

    }

    
    found: std::cout << arr[i] << std::endl;


    
}