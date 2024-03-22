#include <bits/stdc++.h>
using namespace std;

int main() {
    int leftright = 0, dir1, dir2, input;
    string lastdir = "error";
    while (true) {
        cin >> leftright;
        if (leftright == 99999) {
            break;
        }
        input = leftright;
        for (int i = 0; i < 5; i++) {
            int num = input % 10;
            input = input / 10;
            if (i == 3) {
                dir1 = num;
            }
            if (i == 4) {
                dir2 = num;
            }
        }
        if (((dir1 + dir2) % 2 == 0) && (dir1 + dir2) != 0) {
            lastdir = "right";
            cout << "right " << leftright - (((dir2 * 10) + dir1) * 1000) << endl;
        } else if ((dir1 + dir2) != 0) {
            lastdir = "left";
            cout << "left " << leftright - ((((dir2 * 10) + dir1)) * 1000) << endl;
        } else {
            cout << lastdir << " " << leftright - ((((dir2 * 10) + dir1)) * 1000) << endl;
        }
    }
    return 0;
}
