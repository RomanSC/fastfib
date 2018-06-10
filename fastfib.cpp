#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::int1024_t;

int fast_fib(int1024_t n) {
    int1024_t count = 0;
    int1024_t a = 0;
    int1024_t b = 1;
    int1024_t c;

    while (count < n) {
        c = a + b;
        a = b;
        b = c;

        count += 1;

        cout << "fib(" << count << ") = " << a << endl;
    }

    if (count == n) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    fast_fib(80);

    return 0;
}
