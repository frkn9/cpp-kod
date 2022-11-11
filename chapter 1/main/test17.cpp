#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    vector<int> scores(100,4);

    scores[0] = 13;                     //vectors in c++

    cout << scores.at(2) << endl;

}