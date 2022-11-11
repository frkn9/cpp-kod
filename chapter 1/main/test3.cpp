#include <iostream>

using namespace std;
using std::string;

enum meal_type {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

struct passanger {
    string name;            // passenger name
    meal_type mealPref;     // meal preference
    bool isFreqFlyer;       // in the frequent flyer program?
    string freqFlyerNo;     // the passenger’s freq. flyer number

};

passanger pass = {"Halil", LOW_FAT, true, "7984" };



int main() {
                        //adding a new passanger:
    passanger* p;       //p points to the new passanger
    p = new passanger;  

    p->name = "memis";          //set the structure members
    p->mealPref = LOW_FAT;      //pointerla struct modify ederken ok yap
    p->isFreqFlyer = false;     //BUNLAR *p.name ile çalışmıyor
    p->freqFlyerNo = "NONE";

    cout << pass.name << endl;
    cout << pass.mealPref << endl;
    cout << pass.isFreqFlyer << endl;
    cout << pass.freqFlyerNo << endl;
    cout << "" << endl;

    cout << p->name << endl;
    cout << p->mealPref << endl;
    cout << p->isFreqFlyer << endl;
    cout << p->freqFlyerNo << endl;

    delete p;

    
}