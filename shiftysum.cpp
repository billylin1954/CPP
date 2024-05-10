#include <bits/stdc++.h>
using namespace std;
int main() {
    int input = 0, multiplyNum, changedNum;
    cin >> input >> multiplyNum;
    changedNum = input;
    for (int i = 0; i < multiplyNum; i++) {
        changedNum *= 10;
        input += (changedNum);
    }
    cout << input << endl;
    return 0;
}