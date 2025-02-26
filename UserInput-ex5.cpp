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
    int userin;
    cout << "Please enter an integer value: ";
    cin >> userin;
    int out = factorial(userin);
    cout << "The value you entered is " << userin; 
    cout << " and its factorial is " << out << "\n"; 
    return 0;
}