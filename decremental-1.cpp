#include <bits/stdc++.h>
using namespace std;
int main() {
    int input;
    cin >> input;
    for (int i = input; i >= 1; i -= 2) {
        for (int j = input; j >= 1; j -= 2) {
            cout << j << " ";
        }
        cout << endl;
        input = input - 2;
    }
    return 0;
}