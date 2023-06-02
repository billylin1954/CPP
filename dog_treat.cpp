#include <bits/stdc++.h>
using namespace std;
int main() {
    int medium, small, large, happy_score;
    cin >> medium >> small >> large;
    happy_score = small + ((2 * medium) + (3 * large));
    if (happy_score >= 10) {
        cout << "happy" << endl;
    }else{
        cout<<"sad"<<endl;
    }
    return 0;
}