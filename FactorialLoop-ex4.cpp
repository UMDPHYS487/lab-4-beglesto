// Add your code here
#include <iostream>

using namespace std;

int factorial(int num) {
    int fact = 1;
    for(int j=num; j>0; j--) {
        fact*=j;
    }
    return fact;
}

int main() {
    for(int i=1; i<=10; i++) {
        int fact = factorial(i);
        cout << "factorial of " << i << " is " << fact << "\n";
    }
    return 0;
}