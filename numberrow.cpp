#include <iostream>
using namespace std;
int main() {
    int n = 5; 

    for (int i = n; i >= 1; i--) 
    {
        for (int k = 1; k <= i; k++) {
            cout << k << "";
        }
        cout << endl;
    }

    return 0;
}