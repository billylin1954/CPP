#include <bits/stdc++.h>
using namespace std;
int main() {
    int input, num = 0;
    cin >> input;
    while (input != 0) {
        int num = input % 10;
        input = input / 10;
        cout << num << endl;
    }

    return 0;
}