#include <bits/stdc++.h>
using namespace std;

void modifyString(string& S, string& s1,
                  string& s2) {
    if (S.length() >= 4) {
        string ans = "";

        for (int i = 0; i < S.length(); i++) {
            int k = 0;
            int L = 1;
            if (S[i] == s1[k] && i + s1.length() <= S.length()) {
                int j;

                
                for (j = i; j < i + s1.length(); j++) {
                    if (S[j] != s1[k]) {
                        break;
                    } else {
                        k = k + 1;
                    }
                }

                
                if (j == i + s1.length()) {
                    ans.append(s2);
                    i = j - 1;
                }else {
                    ans.push_back(S[i]);
                }
            }

            
            else {
                ans.push_back(S[i]);
            }
        }

        
        cout << ans;
    } else {
        if(S!="quit"){
        cout << S<< endl;
        }
    }
    
    
}

int main() {
    string S = "color";
    string s1 = "or";
    string s2 = "our";
    while(S!="quit"){
    cin>>S;
    modifyString(S, s1, s2);
    }

    return 0;
}