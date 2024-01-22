#include <bits/stdc++.h>
using namespace std;
int main() {
    int input = 1, length, width, perimeter;
    while (input!=0) {
        cin >> input;
        width = sqrt(input);
        length = input / width;
        while (true) {
            if ((input / width) * width == input) {
                perimeter = 2 * (input /width + width);
                length = input / width;
                cout << "Minimum perimeter is " << perimeter << " with dimensions " << length << " X " << width << endl;
                return 0;
            }
            width = width - 1;
        }
    }
    return 0;
}