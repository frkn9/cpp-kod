#include <vector>
#include "creditcard.hpp"
                                                                    //code fragment 1.4
using namespace std;

void test_card() {                                  //credit card test function
    vector<credit_card*> wallet(10);                //vector of 10 credit card pointers

    wallet[0] = new credit_card("5391 0375 9387 5309", "John Bowman", 2500);      /****************************/
    wallet[1] = new credit_card("3485 0399 3395 1954", "John Bowman", 3500);      /*      allocate 3 cards    */
    wallet[2] = new credit_card("6011 4902 3294 2994", "John Bowman", 5000);      /***************************/

    for(int j = 1; j <= 16; j++) {
        wallet[0]->charge_it(double(j));
        wallet[1]->charge_it(2 * j);                //making some charges
        wallet[2]->charge_it(double(3 * j));
    }

    cout << "Card payments: \n";
    for(int i = 0; i < 3; i++) {
        cout << *wallet[i];                                                                 
        while(wallet[i]->get_balance() > 100) {                                             //make more charges
            wallet[i]->make_payment(100.0);
            cout << "New balance = " << wallet[i]->get_balance() << "\n";
        }
        cout << "\n";
        delete wallet[i];                                                                   //deallocate storage
    }
}

int main() {
    test_card();
    return EXIT_SUCCESS;
}