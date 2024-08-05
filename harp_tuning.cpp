#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cin >> input;
    bool is_digit = false;
    int output_loc = 0, output_length = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '-' || input[i] == '+') {
            output_length += 1;
        }
    }
    string output[output_length];
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '-') {
            output[output_loc] += " ";
            output[output_loc] += "loosen";
            output[output_loc] += " ";
            i+=1;
            is_digit = true;
        }
        if (input[i] == '+') {
            output[output_loc] += " ";
            output[output_loc] += "tighten";
            output[output_loc] += " ";
            i+=1;
            is_digit = true;
        }
         output[output_loc] += input[i];
        if (is_digit == true && isdigit(input[i + 1]) == false) {
             output_loc += 1;
            is_digit = false;
        }
    }
    for (int i = 0; i < output_length; i++) {
        cout << output[i] << endl;
    }
    return 0;
};