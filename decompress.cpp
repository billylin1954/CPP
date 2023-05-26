#include <bits/stdc++.h>
using namespace std;

int main() {
    int Line, Number = 0;
    string Letter;
    cin >> Line;

    for (int i = 0; i < Line; i++) {
        cin >> Number >> Letter;

        for (int j = 0; j < Number; j++) {
            cout << Letter;
        }
        cout << endl;
    }
}
