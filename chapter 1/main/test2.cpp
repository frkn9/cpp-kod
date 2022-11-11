#include <iostream>
#include <string>

using namespace std;
using std::string;

int main() {
    string str = "furkan";

    cout << str << endl;

    string u = "mehmet";
    string p = " furkan";       //string concenating
    string k = " cetiner";

    string m = u + p + k;

    cout << m << endl;

    cout << u.size() << endl;
}