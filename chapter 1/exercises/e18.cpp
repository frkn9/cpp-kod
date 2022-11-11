#include <iostream>

bool isMultiple(long n, long m) {
    return (n % m == 0 ? true : false);
};

int main(void) {
    std::cout << isMultiple(10, 5) << std::endl;
}