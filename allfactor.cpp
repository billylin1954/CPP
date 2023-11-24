#include <bits/stdc++.h>
using namespace std;
void Smallestp(int input, int length, int width, int perimeter, int modified_input, int length_og, int small_1, int small_2) {
    bool isprime;
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
    if (input == 7) {
        isprime = true;
        perimeter = (input * 2) + 2;
        length = input;
        width = 1;
    }
    if (ceil(sqrt(input)) != floor(sqrt(input)) && isprime == false) {
        while (true) {
            if (modified_input * length == input) {
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
            if (input < (length * modified_input + 1)) {
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
    cout << "smallest perimeter is " << perimeter << endl;
}
int main() {
    int small_1;
    int small_2;
    int length = 2;
    int input;
    int length_og = length;
    int width = 0;
    int modified_input = 0;
    cin >> input;
    int perimeter = 0;
    Smallestp(input, length, width, perimeter, modified_input, length_og, small_1, small_2);
    bool isprime;
    small_1 = length;
    small_2 = modified_input;
    length = 2;
    length_og = length;
    width = 0;
    modified_input = 0;
    perimeter = 0;
    isprime = false;
    while (input != modified_input) {
        if (input == 7) {
            isprime = true;
            perimeter = (input * 2) + 2;
            length = input;
            width = 1;
        }

        while (modified_input != input) {
            if (modified_input * length == input) {
                cout << modified_input << "x" << length << endl;
            }
            if (input % 2 != 0 && input % 3 != 0 && input % 5 != 0 && input % 7 != 0) {
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
            if (input < (length * modified_input + 1)) {
                modified_input = 1;
                length = length_og + 1;
                length_og = length_og + 1;
            }
        }
    }
    return 0;
}
