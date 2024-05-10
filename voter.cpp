#include <bits/stdc++.h>
using namespace std;
int main() {
    int vote_num,vote_num_A=0,vote_num_B=0;
    string votes;
    cin>>vote_num>>votes;
    for(int i=0;i<vote_num;i++){
        if(votes[i]=='A'){
            vote_num_A+=1;
        }
        if(votes[i]=='B'){
          vote_num_B+=1;
        }
    }
    if(vote_num_A>vote_num_B){
        cout<<"A"<<endl;
    }else if(vote_num_A<vote_num_B){
        cout<<"B"<<endl;
    }else if(vote_num_A==vote_num_B){
        cout<<"Tie"<<endl;
    }
    return 0;
}
