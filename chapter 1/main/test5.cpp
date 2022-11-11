#include <iostream>

using namespace std;


namespace myglobals {
    int cat = 1;                    //namespaces
    string dog = "woof";
}

int main(void) {
    
    std::cout << myglobals::cat << std::endl;     //namespace ile çalışıyor. 
   // cout << cat << endl;            //namespacesiz cat undefined 
}