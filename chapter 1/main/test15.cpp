#include <iostream>
#include <string>

using namespace std;

class taxi{ 
    public:
        taxi(const string& t_id, const string& nm, const string& s_nm, const string& t_n, bool ocp, int* l_5_c);
        taxi();
        void get_full_name();
        void get_taxi_no();
        void get_tc_no();
        void get_occupation_status();
        void get_money_earned_last_5();
    private: 
        string taxi_id;
        string driver_name;
        string driver_surname;
        string driver_tc_no;
        bool occupied;
        int* money_earned_last_five_customers = new int[5];
};

taxi::taxi(const string& t_id, const string& nm, const string& s_nm, const string& t_n, bool ocp, int* l_5_c) {
    taxi_id = t_id;
    driver_name = nm;
    driver_surname = s_nm;          
    driver_tc_no = t_n;
    occupied = ocp;

    for(int i = 0; i < 5; i++) { *(money_earned_last_five_customers + i) = *(l_5_c + i); }
}

void taxi::get_full_name() {
    cout << driver_name << " " << driver_surname << endl;
}

taxi::taxi() {
    driver_name = "NO_NAME";
    driver_name = "NO_SURNAME";
    driver_tc_no = "NO_TC";
    taxi_id = "NO_TAXI_ID";
    occupied = true;                                    //random

    int* p = new int(5);

    for(int i = 0; i < 5; i++) {
        *(p+i) = 0;
    }

    money_earned_last_five_customers = p;
}






int main(void) {
    
    int *k = new int[5];
    *(k) = 41; *(k+1) = 34; *(k+2) = 54; *(k+3) = 65; *(k+4) = 14;
    taxi* s = new taxi("5kdlasp34", "furkan", "cetiner", "24406058458", false, k);

    s->get_full_name();




}