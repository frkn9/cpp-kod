#include <iostream>
#include <string>

using namespace std;


class Flower {
    private: 
        string name;
        int quantity_pedals;                                                //STRINGLER HEP const string& ŞEKLİNDE OLACAK YOKSA
        float price;                                                        //KOD ÇALIŞMIYOR
    public:                                                                 
        Flower(const string& nm,int qp, float pr);
        Flower(); 

        string get_name() const {return name;};
        int get_quantity_pedals() const {return quantity_pedals;};
        float get_price() const {return price;};

        void set_name(const string& nm) {name = nm;};
        void set_quantity_pedals(int q_m) {quantity_pedals = q_m;};
        void set_price(int pr) {price = pr;};
};

Flower::Flower(const std::string& nm, int qp, float pr) {
    name = nm;
    quantity_pedals = qp;
    price = pr;
}

Flower::Flower() {
    name = "NO_NAME";
    quantity_pedals = 0;
    price = 0.0;
}

int main(void) {
    Flower orkide("orkide", 8, 25.4);

    orkide.set_name("orchid");
    orkide.set_price(45);
    orkide.set_quantity_pedals(6);

    cout << orkide.get_name() << " " << orkide.get_quantity_pedals() << " " << orkide.get_price() << endl;
    
}