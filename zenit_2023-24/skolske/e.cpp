#include <iostream>
#include <string>
using namespace std;

bool up(string input[], int x, int y, int width, int height) {
    string temp = {};
    if (x-4 >= 0) {
        for (int i = x; i > x-5; i--) {
            temp += input[i][y];
        }
    }

    if (temp == "ZENIT") {
        return true;
    }

    return false;
}

bool down(string input[], int x, int y, int width, int height) {
    string temp = {};
    if (x+4 <= height-1) {
        for (int i = x; i < x+5; i++) {
            temp += input[i][y];
        }
    }

    if (temp == "ZENIT") {
        return true;
    }

    return false;
}

bool left(string input[], int x, int y, int width, int height) {
    string temp = {};
    if (y-4 >= 0) {
        for (int i = y; i > y-5; i--) {
            temp += input[x][i];
        }
    }

    if (temp == "ZENIT") {
        return true;
    }

    return false;
}

bool right(string input[], int x, int y, int width, int height) {
    string temp = {};
    if (y+4 <= width-1) {
        for (int i = y; i < y+5; i++) {
            temp += input[x][i];
        }
    }

    if (temp == "ZENIT") {
        return true;
    }

    return false;
}

bool diagLeftUp(string input[], int x, int y, int width, int height) {
    string temp = {};
    if (y-4 >= 0 && x-4 >= 0) {
        for (int i = 0; i < 5; i++) {
            temp += input[x-i][y-i];
        }
    }

    if (temp == "ZENIT") {
        return true;
    }

    return false;
}

bool diagRightUp(string input[], int x, int y, int width, int height) {
    string temp = {};
    if (y+4 <= width-1 && x-4 >= 0) {
        for (int i = 0; i < 5; i++) {
            temp += input[x-i][y+i];
        }
    }

    if (temp == "ZENIT") {
        return true;
    }

    return false;
}

bool diagRightDown(string input[], int x, int y, int width, int height) {
    string temp = {};
    if (y+4 <= width-1 && x+4 <= height-1) {
        for (int i = 0; i < 5; i++) {
            temp += input[x+i][y+i];
        }
    }

    if (temp == "ZENIT") {
        return true;
    }

    return false;
}

bool diagLeftDown(string input[], int x, int y, int width, int height) {
    string temp = {};
    if (y-4 >= 0 && x+4 <= height-1) {
        for (int i = 0; i < 5; i++) {
            temp += input[x+i][y-i];
        }
    }

    if (temp == "ZENIT") {
        return true;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    string *charArr = new string[n];

    for (int i = 0; i < n; i++) {
        cin >> charArr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (up(charArr, i, j, n, n) || down(charArr, i, j, n, n)|| left(charArr, i, j, n, n)|| right(charArr, i, j, n, n)|| diagLeftDown(charArr, i, j, n, n)|| diagLeftUp(charArr, i, j, n, n)|| diagRightDown(charArr, i, j, n, n)|| diagRightUp(charArr, i, j, n, n)) {
                cout << "OK" << endl;
                return 0;
            }
        }
    }

    cout << "WA" << endl;

    return 0;
}