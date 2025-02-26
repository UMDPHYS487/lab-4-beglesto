// Your code here
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b{0b01110010};
    cout << b << " (initial value)\n";

    b=~b;

    cout << b << " (final value)\n";

    return 0;
}