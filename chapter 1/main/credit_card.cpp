#include "creditcard.hpp"           //provides credit card
#include "test_card.cpp"

using namespace std;                                        //code fragment 1.3

credit_card::credit_card(const string& no, const string& nm, int lim, double bal) {
    number = no;
    name = nm;
    balance = bal;
    limit = lim;
}

bool credit_card::charge_it(double price) {
    if(price + balance > double(limit))                     
        return false;                           //over limit
    balance += price;
    return true;                                //charge goes through
}

void credit_card::make_payment(double payment) {            //make a payment
    balance -= payment;
}

ostream& operator<<(ostream& out, const credit_card& c) {       //print card info
    out << "Number = " << c.get_number() << "\n"
    << "Name = " << c.get_name() << "\n"
    << "Balance = " << c.get_balance() << "\n"
    << "Limit = " << c.get_limit() << "\n";

    return out;
}