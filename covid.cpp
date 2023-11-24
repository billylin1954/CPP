#include <bits/stdc++.h>
using namespace std;
int main() {
    int people, rate, num, day = 0, output;
    cin >> people >> num >> rate;
    output = num;
    while (people >= output) {
        day++;
        num = num * rate;
        output+=num;
       // if (day > 0 && rate == 1) {
         //   num = num + output;
       // }
    }

    cout << day << endl;
    return 0;
}