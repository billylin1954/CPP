#include <bits/stdc++.h>
using namespace std;
int main() {
    int input, length = 2, width, perimeter, modified_input, length_og;
    bool isprime;
    while ( input>0) {
        cin >> input;
        length = 2;
        length_og = length;
        width = 0;
        modified_input = 0;
        perimeter = 0;
        isprime = false;
        if (input % 2 != 0 && input % 3 != 0 && input % 5 != 0 && input % 7 != 0) {
            isprime = true;
            perimeter = (input * 2) + 2;
            length = input;
            width = 1;
        }
        if (input % 2 != 0 && input % 3 != 0 && input % 5 != 0 && input % 7 != 0) {
            isprime = true;
            perimeter = (input * 2) + 2;
            length = input;
            width = 1;
        }
        if (input==7) {
            isprime = true;
            perimeter = (input * 2) + 2;
            length = input;
            width = 1;
        }
        
        if (ceil(sqrt(input)) != floor(sqrt(input)) && isprime == false) {
            while (true) {
                if(modified_input*length==input){
                    break;
                }
                modified_input++;
                if (length * modified_input == input) {
                    break;
                }
                length++;
                if (length * modified_input == input) {
                    break;
                }
                if (input < (length * modified_input+1)) {
                    modified_input = 1;
                    length = length_og + 1;
                    length_og = length_og + 1;
                }
            }
            perimeter = length + modified_input;
            perimeter = perimeter * 2;
            width = modified_input;
        }

        if (ceil(sqrt(input)) == floor(sqrt(input))) {
            perimeter = sqrt(input) * 4;
            width = sqrt(input);
            length = sqrt(input);
        }

        cout << " Minimum perimeter " << length <<" "<<" With dimesions " << width << " and " << width << endl;
    }
    return 0;
}