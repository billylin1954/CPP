#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[4][4],values[4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
            values[i]+=arr[i][j];
        }
    }
    if(values[0]==values[1]&&values[0]==values[2]&&values[0]==values[3]&&values[2]==values[3]){
        cout<<"magic"<<endl;
    }else{
        cout<<"not magic"<<endl;
    }
    return 0;
}