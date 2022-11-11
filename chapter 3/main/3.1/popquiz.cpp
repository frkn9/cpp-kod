#include "test.hpp"

void init_and_assign(int **p, int val) {
    *p = new int;
    **p = val;
}

int main(void) {
    
    int* num;
    int **ptr;

    ptr = &num;

    init_and_assign(ptr, 3);

    cout << *num << endl;    
}

