#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 5;
    for (int i = 0; i < sum; i++) {
        for (int k = i + 1; k < sum; k++) {
            for (int j = k + 1; j < sum; j++) {
                cout << i << k << j << endl;
            }
        }
    }

    return 0;
}