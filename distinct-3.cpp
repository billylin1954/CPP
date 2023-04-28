#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum;
    cin >> sum;
    for (int i = 0; i < sum; i++) {
        for (int j = i + 1; j < sum; j++) {
            for (int k = j + 1; k < sum; k++) {
                if (i + k + j == sum && i != k ) {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}