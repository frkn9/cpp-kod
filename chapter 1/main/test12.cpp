#include <iostream>
#include <string>

using namespace std;


enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

class Passenger { // Passenger (as a class)
    public:
        Passenger(); // default constructor
        Passenger(const string& nm, MealType mp, const string& ffn = "NONE");
        Passenger(const Passenger& pass); // copy constructor
        bool isFrequentFlyer() const; // is this a frequent flyer?
        // make this a frequent flyer
        void makeFrequentFlyer(const string& newFreqFlyerNo);
        // . . . other member functions

    private:
        string name; // passenger name
        MealType mealPref; // meal preference
        bool isFreqFlyer; // is a frequent flyer?
        string freqFlyerNo; // frequent flyer number
};

Passenger::Passenger() { // default constructor
    name = "--NO NAME--";
    mealPref = NO_PREF;
    isFreqFlyer = false;
    freqFlyerNo = "NONE";
} // constructor given member values
Passenger::Passenger(const string& nm, MealType mp, const string& ffn) { 
    name = nm;
    mealPref = mp;
    isFreqFlyer = (ffn != "NONE"); // true only if ffn given
    freqFlyerNo = ffn;
} // copy constructor
Passenger::Passenger(const Passenger& pass) { 
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNo = pass.freqFlyerNo;
}

bool Passenger::isFrequentFlyer() const { 
    return isFreqFlyer;
}

void Passenger::makeFrequentFlyer(const string& newFreqFlyerNo) { 
    isFreqFlyer = true;
    freqFlyerNo = newFreqFlyerNo;
}

int main(void) {

    Passenger muho("muhammet", VEGETARIAN);

    cout << bool (muho.isFrequentFlyer()) << endl;


}