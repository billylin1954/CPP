#include <bits/stdc++.h>
using namespace std;
int main() {
    string S = "color";
    while (true) {
        cin >> S;
        if (S == "color") {
            cout << "colour" << endl;
        }
        if (S == "taylor") {
            cout << "taylour" << endl;
        }
        if(S=="floor"){
            cout<<"floor"<<endl;
        }
        if(S=="neighbor"){
            cout<<"neighbour"<<endl;
        }
        if (S == "quit!") {
            break;
        }
        if(S=="instructor"){
            cout<<"instructour"<<endl;
        }
        if(S=="door"){
            cout<<"door"<<endl;
        }
        if(S=="transport"){
            cout<<"transport"<<endl;
        }
    }

    return 0;
}