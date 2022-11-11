#include <iostream>

using namespace std;                    //adsaikdmads

class vector2 {
    private:
        double x;
        double y;
    public:
        vector2(double x, double y) {
            this->x = x;
            this->y = y;
        };
        void printing() {
            cout << "x = " << x << "  y = " << y << endl;
        }

        void add_vectors(vector2& a, vector2& b) {
            vector2 c(0,0);
            c.x = a.x + b.x;
            c.y = a.y + b.y;

            cout << "vect1_x + vect2_x = " << c.x  << " vect1_y + vect2_y = " << c.y  << endl;   
        }
};



int main(void)  {
    vector2 vect_1(3, 5);
    vector2 vect_2(5, 7);
    vector2 vect_3(0,0);

    vect_3.add_vectors(vect_1, vect_2);

}