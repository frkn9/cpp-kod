#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(void) {

    string s = "abc";
    string t = "cde";

    s+= s + t[1] + s;                       //abcabcdabc

    cout << s << endl;    


}