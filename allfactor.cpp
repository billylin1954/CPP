#include <bits/stdc++.h>
using namespace std;
int main() {
    int input, length = 2, width, perimeter, modified_input = 1, length_og = 2, copy_1, copy_2;
    cin >> input;
    perimeter=(input/floor(sqrt(input))+floor(sqrt(input)))*2;
    cout<<"smallest perimeter is "<<perimeter<<endl;
    while (length_og < input) {
        if (modified_input * length == input) {
            cout << modified_input << "x" << length << endl;
        }
        modified_input++;
        length++;
     
        if (input < (length * modified_input + 1)) {
            if (length * modified_input == input && modified_input) {
                cout << modified_input << "x" << length << endl;
            }
            if (length * modified_input + 1 > input) {
                copy_1 = modified_input;
                copy_2 = length;
                modified_input = 1;
                length_og = length_og + 1;
                length = length_og;
            }
        }
    }
    cout<<1<<"X"<<input<<endl;
    return 0;
}