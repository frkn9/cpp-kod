#include <iostream>
#include <string>

using namespace std;

class SomeClass { 
    private:
        int secret;
    public:
    // . . . // give << operator access to secret
        friend ostream& operator<<(ostream& out, const SomeClass& x);               //friends of a class
};

ostream& operator<<(ostream& out, const SomeClass& x){
    cout << x.secret;
}


int main(void) {

}