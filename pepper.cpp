#include <bits/stdc++.h>
using namespace std;
int main() {
    int shu = 0, chilli_num;
    string input;
    cin >> chilli_num;
    for (int i=1; i <= chilli_num; i++) {
        cin >> input;
        if (input == "Thai") {
            shu += 75000;
        }
        if (input == "Cayenne") {
            shu += 40000;
        }
        if (input == "Habanero") {
            shu += 125000;
        }
        if (input == "Serrano") {
            shu += 15500;
        }
        if (input == "Poblano") {
            shu+=1500;
        }
        if(input=="Mirasol"){
            shu+=6000;
        }
    }
    cout<<shu<<endl;
}
