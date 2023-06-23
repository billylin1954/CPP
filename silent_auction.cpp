#include <bits/stdc++.h>
using namespace std;
int main() {
    int number_of_bidders, largest=0,bids;
    cin >> number_of_bidders;
    string bidders,winner;
    
    for (int i = 1; i <= number_of_bidders; i++) {
        cin >> bidders[i];
        cin >> bids[i];
    
    
    if (bids>largest) {
        if (largest < bids) {
            largest = bids;
             winner=bidders;
        }
    }
    }
    cout << winner << endl;

    return 0;
}
