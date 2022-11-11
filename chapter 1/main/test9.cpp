#include <iostream>
#include <string>

using namespace  std;

void print(string a) {

    cout << a << endl;
}                               //function overloading

void print(int k) {
    cout << k << endl;
}

int main(void) {
    int a = 4;
    string b = "kek";
    print(a);           //function overloading
    print(b);


} 
