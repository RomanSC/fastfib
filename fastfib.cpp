#include<iostream>
#include<gmpxx.h>
using std::cout;
using std::endl;

int fast_fib(mpz_class n = 1'000'000'000) {
    mpz_class iterCount = 0;
    mpz_class a = 0;
    mpz_class b = 1;
    mpz_class c;

    while (iterCount < n) {
        c = a + b;
        a = b;
        b = c;
        ++iterCount;

        cout << "fib(" << iterCount << "): " << endl;
        cout << a << endl << endl;
    }

    if (iterCount == n) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    fast_fib();

    return 0;
}
