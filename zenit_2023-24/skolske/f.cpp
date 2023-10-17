#include <iostream>
#include <algorithm>

using namespace std;

int main() { 

    int n;
    cin >> n;

    int *arr = new int[n];
    int *revArr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + arrSize);

    int j = n-1;

    for (int i = 0; i < n; i++) {
        revArr[i] = arr[j];
        j--;
    }

    int watchingFilm = revArr[1];

    int films = n-2;

    int result = 0;

    do {
        if (films > 0) {
            result++;
            films--;
        }
        watchingFilm--;
    } while (watchingFilm > 1);

    cout << result << endl;

    return 0;
}