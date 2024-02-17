#include <bits/stdc++.h>
using namespace std;
int main() {
    int input, i = 3;
    cin >> input;
    while (true) {
        if (input % i != 0 && input != i) {
            cout << "prime" << endl;
            break;
        } else if (input != i) {
            cout << "composite" << endl;
            break;
        }
        i += 2;
    }
}
