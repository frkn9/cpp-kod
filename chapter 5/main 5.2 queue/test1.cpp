#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    queue<int> myQueue;

    myQueue.push(7);
    myQueue.push(45);
    myQueue.push(748);
    cout << myQueue.front() << endl;
    
}