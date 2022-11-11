#include <iostream>

void f(int x)
    { std::cout << ++x << std::endl; } 
void g(int& d)
    { std::cout << ++d << std::endl;}

int main(void) {

    int a = 3;
    f(a);
    std::cout << a << std::endl;

    g(a);
    std::cout << a << std::endl;



}