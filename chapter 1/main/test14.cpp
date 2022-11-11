#include <iostream>
#include <string>

using namespace std;

class insan {

    public:
        insan(string i, string s, string t_n);
        void print();
    private:
        string isim;
        string soyisim;
        string tc_no;
};

insan::insan(string i, string s, string t) {
    isim = i;
    soyisim = s;
    tc_no = t;
};

void insan::print() {
    cout << isim << " " << soyisim << " " <<tc_no << endl; 
};




int main(void) {

    insan rando1("ahmet", "cakir", "24405098425" );

    rando1.print();

}