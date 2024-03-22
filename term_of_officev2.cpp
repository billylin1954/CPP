#include <bits/stdc++.h>
using namespace std;

void myfunction(int startyear,int endyear,int year){

cin >> startyear >> endyear;
    year = startyear;
    while (year <= endyear) {
        cout << "All positions change in year " << year << endl;
        year = year + 60;
    }
}

int main() {
    int startyear,endyear,year;
    myfunction(startyear, endyear,year);

    return 0;
}
