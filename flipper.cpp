#include <bits/stdc++.h>
using namespace std;
int icon[2][2]{
    {1,2},
    {3,4}
};
int main() {
    //int vertical_flips = 0, horizontal_flips = 0;
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'V') {
            icon[0][0]+=1;
           icon[0][1]-=1;
           icon[1][0]+=1;
           icon[1][1]-=1;
        } else if (input[i] == 'H') {
           icon[0][0]+=2;
           icon[0][1]+=2;
           icon[1][0]+=2;
           icon[1][1]-=2;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<icon[i][j];
        }
       cout<<""<<endl;
    }
      
   
    return 0;
}