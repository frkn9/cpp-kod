#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string a = "a penguin";

    cout << a.find("pen") << endl;
    if(a.find("pen", 3) == string::npos) {
        cout << "not found" << endl;
    };
    cout << a.substr(3, 6) << endl;
    a.insert( 2, "swimming ");                  //string functions
    cout << a << endl;
    a.replace(2, 8, "flying");
    cout << a << endl;

    cout << a.size() << endl;
}