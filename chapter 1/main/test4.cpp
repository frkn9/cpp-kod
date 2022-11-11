#include <string>
#include <iostream>

using namespace std;

int main() {

    char* buffer = new char[450];
    buffer[5] = 'a';            //dynamically allocating array
    delete [] buffer;

    string yazar = "furkan";
    string& penname = yazar;        //references
    penname = "mehmet";
    cout << yazar << endl;

    int a = 2;
    int& b = a;                 //references
    b = 3;
    cout << b << endl;

}