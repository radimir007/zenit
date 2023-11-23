#include <iostream>
#include <string>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    string *inputArr = new string[r];

    char charArr[9] = {};

    for (int i = 0; i < 9; i++) {
        cin >> charArr[i];
    }

    for (int i = 0; i < r; i++) {
        cin >> inputArr[i];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (inputArr[i][j] == '.') {
                cout << '.';
            } else {
                cout << charArr[int(inputArr[i][j]) - 49];
            }
        }
        cout << endl;
    }

    return 0;
}