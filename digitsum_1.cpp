#include <bits/stdc++.h>
using namespace std;
int main() {
    int num,n;
    int sum = 0;

    cin >> num;
    cin>>n;
    for ( int i = 0; i < n; i++) {
        sum = sum + (num % 10);
        num = num / 10;
    }
    cout << sum << endl;
    return 0;
}