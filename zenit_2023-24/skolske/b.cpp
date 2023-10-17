#include <iostream>
#include <string>
using namespace std;

int main() {

    string input;
    getline(cin, input);

    string temp = {};

    int count = 0;

    for (int i = 0; i < input.length()-1; i++) {
        if (input[i] == '-') {
            break;
        }

        temp += input[i];
        if (temp == "ne") {
            count++;
            temp = {};
        }
    }

    if (count % 2 == 0) {
        cout << "ano" << endl;
    } else {
        cout << "nie" << endl;
    }

    return 0;
}