#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    int result = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j != i) {
                result *= arr[j];
            }
        }
        cout << result << " ";
        result = 1;
    }

    cout << endl;

    return 0;
}