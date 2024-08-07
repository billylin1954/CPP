#include <bits/stdc++.h>
using namespace std;
int main() {
    int canidates[9],votes[9][100],canidate_count;
    string canidates_input,current_word;
    cout<<"number of canidates"<<endl;
    cin>>canidate_count;
    cout<<"canidates"<<endl;
    cin>>canidates_input;
    for(int i=0;i<canidate_count;i++){
    for(int j=0;j<canidates_input.length();j++){
        current_word+=canidates_input[j];
    }
    }
}