#include <iostream>
#include <string>

using namespace std;

class ogrenci {
    public:
        ogrenci(const string& is, int nottt);
        void not_goster();
        void not_degistir(int a);
        void isim_goster();
    private:
        string isim;
        int nott;
};

ogrenci::ogrenci(const string& is, int nottt) {
    isim = is;
    nott = nottt;
};

void ogrenci::not_goster() {
    cout << nott << endl;
};

void ogrenci::not_degistir(int a) {
    nott = a;
}

void ogrenci::isim_goster(){
    cout << isim << endl;                                               //constructura stringi const ile koymayınca çalışmıyor
}


int main(void) {
    ogrenci ahmet( std::string ("ahmet") , 78);

    ahmet.isim_goster();
    ahmet.not_goster();
    ahmet.not_degistir(89);
    ahmet.not_goster();
}