#include <bits/stdc++.h>
using namespace std;
int main() {
    int input, num = 0, sum = 0;
    cin >> input;
    while (input > 0) {
        int num = input % 10;
        input = input / 10;
        sum = num + sum;
    }
    cout << sum << endl;
    return 0;
}