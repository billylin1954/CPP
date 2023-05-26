#include <bits/stdc++.h>
using namespace std;
int main() {
    int input;
    cin >> input;
    for (int i = 1; i <= (input+1); i+=3) {
        for (int j = 1;  j  <= i; j+=3) {
            cout << j<<" ";
        }
        cout << endl;
    }
    return 0;
}