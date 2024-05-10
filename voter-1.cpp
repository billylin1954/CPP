#include <bits/stdc++.h>
using namespace std;
int main() {
    int vote_num;
    string votes;
    cin>>vote_num>>votes;
    if(count(votes,votes.size(),"A")>count(votes,votes.size(),"B")){
        cout<<"A"<<endl;
    }else if(count(votes,votes.size(),"A")<count(votes,votes.size(),"B")){
        cout<<"B"<<endl;
    }else if(count(votes,votes.size(),"A")==count(votes,votes.size(),"B")){
        cout<<"Tie"<<endl;
    }
    return 0;
}