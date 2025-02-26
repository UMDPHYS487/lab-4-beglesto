// Add your code here
#include <iostream>

using namespace std;

int main() {
    for(int i=1; i<=10; i++) {
        int fact = 1;
        for(int j=i; j>0; j--) {
            fact*=j;
        }
        cout << "factorial of " << i << " is " << fact << "\n";
    }
    return 0;
}