#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    int sum = 0;
    cin >> num;
    for ( i = 0; i < 5; i++) {
        sum = sum + (num % 10);
        num = num / 10;
    }
    cout << sum << endl;
    return 0;
}