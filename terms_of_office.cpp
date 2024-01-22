#include <bits/stdc++.h>
using namespace std;
int main() {
    int startYear, endYear, year;
    cin >> startYear >> endYear;
    year = startYear;
    while (year <= endYear) {
        cout << "All positions change in year " << year << endl;
        year = year + 60;
    }
    return 0;
}
