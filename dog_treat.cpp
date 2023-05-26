#include <bits/stdc++.h>
using namespace std;
int main() {
    int Medium, Small, Large, Happy_score;
    cin >> Medium >> Small >> Large;
    Happy_score = Small + ((2 * Medium) + (3 * Large));
    if (Happy_score >= 10) {
        cout << "happy" << endl;
    }else{
        cout<<"sad"<<endl;
    }
    return 0;
}