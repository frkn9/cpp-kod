#include <iostream>
#include <map>

using namespace std;

int main(void) {
    //map<key type, value type>
    map<char, int> myMap = { {'T', 1}, {'B', 2}, {'C', 3} };

    myMap['F'] = 4;

    myMap.insert(pair<char, int>('S', 5 ));

    pair<char,int> p1('G', 6);

    myMap.insert(p1);

    myMap['G']++;
    myMap['G']++;
    myMap['G']++;
    myMap['G']++;

    for(auto itr = myMap.begin(); itr != myMap.end(); itr++) {

        cout << itr->first << " " << itr->second << endl;
    }

}