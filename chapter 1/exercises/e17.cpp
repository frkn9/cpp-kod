#include <iostream>

class all_kinds {
    private:
        int a;
        long b;
        float c;
    public:

        all_kinds(int m, long n, float l) {
            a = m;
            b = n;
            c = l;
        };

        all_kinds() {
            a = 1;
            b = 7L;
            c = 49.3F;
        };

        int get_int() const {return a;};
        long get_long() const {return b;};
        float get_float() const{return c;};

        void set_int(int p) {a = p;};
        void set_long(long p) {b = p;};
        void set_float(float p) {c = p;};

        float add_float_long() const {return float(b) + c;};

};

int main(void) {

}