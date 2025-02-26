// Add your code here
#include <iostream>
using namespace std;

int y;
int *x;

int main() {
    y = 4;
    x = &y;
    cout << *x << "\n";
    y = 16;
    cout << *x << "\n";
    y = 256;
    cout << *x << "\n";
    return 0;
}