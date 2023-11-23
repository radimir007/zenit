#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a = arr[0], b = 0;
    int maxCount = 0, curCount = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != a && b == 0) {
            b = arr[i];
            curCount++;
        }

        if (arr[i] == a || arr[i] == b) {
            curCount++;
        } else {
            if (curCount > maxCount) {
                maxCount = curCount;
                curCount = 1;
            }
            a = arr[i];
            b = 0;
        }
    }

    cout << maxCount << endl;

    return 0;
}