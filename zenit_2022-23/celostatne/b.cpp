#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int ding, dong;
    string input;

    unordered_map <char, int> letters;

    cin >> ding >> dong;
    cin >> input;

    for (int i = 0; i < input.size()-1; i++) {
        if (letters.find(input[i]) != letters.end()) {
            letters.find(input[i])->second++;
        } else {
            letters.insert({ input[i], 1 });
        }
    }

    for (auto i = letters.begin(); i != letters.end(); i++) {
        cout << i->first << " : " << i->second << endl;
    }

    return 0;
}