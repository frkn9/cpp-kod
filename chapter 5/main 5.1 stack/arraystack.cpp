#include <iostream>
#include <string>
#include "arraystack.hpp"

using namespace std;

int main(void) {

    
    ArrayStack<int>* myArray;
    myArray = new ArrayStack<int>(50);

    myArray->push(13);
    myArray->push(13);
    myArray->push(13);
    myArray->push(13);
    myArray->push(13);
    myArray->push(13);
    myArray->push(13);
    myArray->push(13);
    myArray->push(13);
    myArray->push(13);

    cout << myArray->top() << endl;
}