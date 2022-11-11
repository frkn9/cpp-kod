#include <iostream>

int func(int* a) {

    (*a)++;
    return *a;
}

int fonk(int& k) {
    k++;
    return k;
}

int main(void) {

    int b = 23;

    int* p;
    p = &b;

    int c = 3;          //referencelar pointer gibi fonksiyonun içinde bir variablenin değerini değiştirebiliyor 
    int& d = c;

    std::cout << *p << std::endl;
    std::cout << func(p) << std::endl;      // random pointer alıştırması
    std::cout << *p << std::endl;

    std::cout << c << std::endl;
    std::cout << fonk(d) << std::endl;
} 