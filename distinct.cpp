#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum;
    cin >> sum;
    for (int i = 0; i < sum; i++) {
        for (int k = 0; k < sum; k++) {
            for (int j = 0; j < sum; j++) {
                if (i + k + j == sum) {
                    cout << i << " " << k << " " << j << endl;
                }
            }
        }
    }

    return 0;
}