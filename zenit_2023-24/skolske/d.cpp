#include <iostream>
#include <bitset>
#include <algorithm>

using namespace std;

int reverseBinary(int decimalNumber) {
    string binaryString = bitset<32>(decimalNumber).to_string();

    reverse(binaryString.begin(), binaryString.end());

    unsigned int reversedDecimal = bitset<32>(binaryString).to_ulong();

    return reversedDecimal;
}

int main() {
    int n;
    cin >> n;

    unsigned int *numArr = new unsigned int[n];

    for (int i = 0; i < n; i++) {
        cin >> numArr[i];
    }

    for (int i = 0; i < n; i++) {
        unsigned int reversedNumber = reverseBinary(numArr[i]);
        cout << reversedNumber << endl;
    }

    

    return 0;
}