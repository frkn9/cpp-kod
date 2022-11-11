#include <iostream>


int largest_in_array(int* a) {
    int max;
    max = *a;

    for(int i = 1; i < 5; i++) {
        if(*(a+i) > max)
            max = *(a+i);
    }

    return max;
}

int main(void) {
    int arr[5] = {5,7,78,1,2};

    std::cout << largest_in_array(arr) << std::endl;
}