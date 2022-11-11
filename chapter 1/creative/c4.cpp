#include <iostream>
#include <vector>

using namespace std;

void print_odds(const vector<int>& a) {
    
    for(int i = 0; i < a.size(); i++ ) {
        if(a[i] % 2 != 0) {
            std::cout << a[i] << std::endl;
        }
    }
}

int main(void) {

    vector<int> a = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

    print_odds(a);

}