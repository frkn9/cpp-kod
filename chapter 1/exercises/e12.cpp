#include <iostream>

using namespace std;

class credit_card {
    public:
        credit_card(const std::string& no, const std::string& nm, int lim, double bal = 0);

        std::string get_number() const {return number;}
        std::string get_name() const {return name;}
        double get_balance() const {return balance;}
        int get_limit() const {return limit;}                       //header file credit card       

        bool charge_it(double price);
        void make_payment(double payment);

    private:
        std::string number;
        std::string name;
        int limit;
        double balance;
};

bool credit_card::charge_it(double price) {
    if( (price + balance > double(limit)) || price <= 0 )                     
        return false;                           //over limit
    balance += price;
    return true;                                //charge goes through
}

void credit_card::make_payment(double payment) {            //make a payment
    if(payment <= 0)
        return;
    balance -= payment;
}

int main(void) {
    
}