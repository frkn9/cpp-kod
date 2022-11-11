#include <iostream>
#include <string>

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
passanger& passo = pass;

void somefunc(const  passanger& passa) {              //passanger type ına referans olacak bir pass istiyor fonksiyon.

    passa.name =  std::string (" Yildirim");        //birisi const string birisi sadece string ondan calısmıyor
    cout << passa.name << endl;      
    return;           
}




int main(void) {

    

    somefunc(passo);


}