#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void honk(){
        cout<<" toot toot"<<endl;
    }
class B : public A{
    public:
    string C ="car";
}

}
int main() {
    
   
    cout <<B.C<<endl;
    return 0;
} 