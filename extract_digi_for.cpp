#include <bits/stdc++.h>
using namespace std;
int main() {
    int input, num = 0;
    cin >> input;
    for (int i = 0; i < 5; i++) {
        int num = input % 10;
        input = input / 10;
        cout << num << endl;
        }

    return 0;
}