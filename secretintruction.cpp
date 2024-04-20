#include <bits/stdc++.h>
using namespace std;

int main() {
    int left_right = 0, dir_1, dir_2, input;
    string last_dir = "error";
    while (true) {
        cin >> left_right;
        if (left_right == 99999) {
            break;
        }
        input = left_right;
        for (int i = 0; i < 5; i++) {
            int num = input % 10;
            input = input / 10;
            if (i == 3) {
                dir_1 = num;
            }
            if (i == 4) {
                dir_2 = num;
            }
        }
        if (((dir_1 + dir_2) % 2 == 0) && (dir_1 + dir_2) != 0) {
            last_dir = "right";
            cout << "right " << left_right - (((dir_2 * 10) + dir_1) * 1000) << endl;
        } else if ((dir_1 + dir_2) != 0) {
            last_dir = "left";
            cout << "left " << left_right - ((((dir_2 * 10) + dir_1)) * 1000) << endl;
        } else {
            cout << last_dir << " " << left_right - ((((dir_2 * 10) + dir_1)) * 1000) << endl;
        }
    }
    return 0;
}
