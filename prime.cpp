#include <bits/stdc++.h>
using namespace std;
int main() {
    int input;
    cin >> input;
    for (int i = 2; i <= (input - 1); i++) {
        if (input % i == 0) {
            cout << "composite" << endl;
            return 0;
        }
    }
    
    cout << "prime" << endl;
    return 0;  
}
