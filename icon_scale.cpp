#include <bits/stdc++.h>
using namespace std;
int main() {
    char icon[3][3] = {
        {'*', 'x', '*'},
        {' ', 'x', 'x'},
        {'*', ' ', '*'},
    };
    int size;
    cin >> size;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < size; l++) {
                    cout << icon[i][k];
                }
            }
            cout << endl;
        }
    }
    return 0;
}