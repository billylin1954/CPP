#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[3][3]={
        {0,1,2},
        {3,4,5},
        {6,7,8}
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<""<<endl;
    }
    cout<<""<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i];
        }
        cout<<""<<endl;
    }
    
    
    return 0;
}