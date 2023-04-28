#include <bits/stdc++.h>
using namespace std;
int main() {
    int player_count, points, fowl;
    int gold_num = 0;
    cin >> player_count;
    for (int i = 0; i < player_count; i++) {
        cin >> points >> fowl;
        int score = (points * 5) - (fowl * 3);
        int total = score + total;
        if (score > 40) {   
            gold_num = gold_num + 1;
        }
    }
    if (gold_num == player_count) {
        cout << gold_num << "+" << endl;
    } else {
        cout << gold_num << endl;
    }

    return 0;
}