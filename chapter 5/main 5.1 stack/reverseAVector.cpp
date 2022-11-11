#include <iostream>
#include <vector>
#include "arraystack.hpp"
using namespace std;


template <typename E>
void reverse(vector<E>& V) { // reverse a vector
    ArrayStack<E> S(V.size());
    for (int i = 0; i < V.size(); i++) // push elements onto stack
    S.push(V[i]);
    for (int i = 0; i < V.size(); i++) { // pop them in reverse order
    V[i] = S.top(); S.pop();
    }
}

void assign_and_init(int *&p, int val) {

}

int main(void) {
    vector<int> vec;
    vec = {5, 6, 7, 8, 9, 10};
    reverse(vec);

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }


}