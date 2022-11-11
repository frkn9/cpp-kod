#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <iostream>                                         //code fragment 1.2
#include <string>

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

std::ostream& operator<<(std::ostream& out, const credit_card& c);




#endif