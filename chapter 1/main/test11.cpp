#include <iostream>

using namespace std;

class counter {
    public:
        counter();
        int get_count();
        void increase_by(int x);            //classes, member functionlar genelde public member variablelar genelde private
    private:
        int count;
};

counter::counter() {                        //yazdığımız fonksiyonların belli bir classa ait olduğunu göstermek için
    count = 0;                              //counter:: scoping specifieri kullanıyoruz
}
int counter::get_count(){
    return count;
}
void counter::increase_by(int x){
    count += x;
}



class ret {
    int rp = 2;
};


int main(void) {

    counter ctr;
                
    cout << ctr.get_count() << endl;
    ctr.increase_by(7);
    cout << ctr.get_count() << endl;

    ctr.count += 7;                                //private olduğu için inaccessible 

    ret foo;

    foo.rp = 3;                                     //public veya private belirtilmezse otomatik olarak private oluyor.



}