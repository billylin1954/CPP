#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[4][4], rows[4];
  
    string answer;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            rows[i] += arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (rows[i] == rows[j]) {
                answer = "magic";
                break;
            } else {
                answer = "not magic";
                break;
            }
        }
    }
       
    return 0;
}