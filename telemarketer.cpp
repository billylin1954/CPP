#include <bits/stdc++.h>
using namespace std;
int main() {
    int output[4];
    for (int i = 0; i <= 3; i++) {
        cin >> output[i];
    }
    if ((output[0] == 8 || output[0] == 9) && (output[3] == 8 || output[3] == 9) && output[1] == output[2]) {
        cout << "ignore" << endl;
    } else {
        cout << "answer" << endl;
    }
    return 0;
}
