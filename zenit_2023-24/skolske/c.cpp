#include <iostream>
using namespace std;

#define endl "\n";

int main() {
    int n;
    cin >> n;

    int *sumArr = new int[n];

    int tempResult = 0;

    for (int i = 0; i < n; i++) {
        cin >> sumArr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }
            tempResult += sumArr[j];
        }
        cout << tempResult << endl;
        tempResult = 0;
    }

    return 0;
}