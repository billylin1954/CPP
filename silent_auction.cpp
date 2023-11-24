#include <bits/stdc++.h>
using namespace std;
int main() {
    int number_of_bidders, largest = 0, bid;
    cin >> number_of_bidders;
    string bidder, winner;

    for (int i = 1; i <= number_of_bidders; i++) {
        cin >> bidder >> bid;
        if (bid > largest) {
            if (largest < bid) {
                largest = bid;
                winner = bidder;
            }
        }
    }
    cout << winner << endl;

    return 0;
}
