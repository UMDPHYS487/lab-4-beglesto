// add your code here
#include <iostream>
using namespace std;

int main() {
    int inp;
    cout << "Please enter an integer: ";
    cin >> inp;
    switch (inp % 2) {
        case 0:
            switch(inp) {
                case 0:
                case 2:
                case 4:
                case 6:
                case 8:
                    {
                    int sq = inp*inp;
                    cout << sq << "\n";
                    break;
                    }
                default:
                    cout << "hahaha\n";
            }
            break;
        case 1:
            cout << float(inp)/2 << "\n";
            break; 
    }

    return 0;
}