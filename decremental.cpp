#include <bits/stdc++.h>
using namespace std;
int main() {
    int  input;
    cin >> input;
    for (int i = 1; i <= input; i++) {
        for (int j = input; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}


