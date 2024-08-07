#include <bits/stdc++.h>
using namespace std;
int main() {
    int word_length = 0, sentence_length = 0, words = 0, sentences = 0, total_length = 0;
    string input;
     cin >> input;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '.' ) {
            sentences++;
        } else if (input[i] == ' ') {
            words++;
            sentence_length++;
            total_length+=word_length;
            word_length=0;

        } else {
            word_length++;
        }

        if (words == 100) {
            break;
        }
    }
    int output=ceil((0.0588 * (total_length / words*100) - 0.296 * (sentences / words * 100) - 15.8));
    if(output>16){
      cout<<"16+"<<endl;
    }
    if ((0.0588 * (total_length / words*100) - 0.296 * (sentences / words * 100) - 15.8)>0) {
        cout << "grade" << ceil((0.0588 * (total_length / words*100) - 0.296 * (sentences / words * 100) - 15.8)) << endl;
    }else{
      cout<<"below 1st grade"<<endl;
       cout << "grade" << 0.0588 * total_length / words - 0.296 * sentences / 100 - 15.8 <<endl;
      cout<< total_length<<" "<< sentences<<words<< endl;
    }
}