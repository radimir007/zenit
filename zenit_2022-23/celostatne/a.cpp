#include <iostream>
#include <unordered_map>
using namespace std; 

int main() {
    unordered_map <string, string> veduckovia = {
        {"David", "kofola"},
        {"Janka", "voda"},
        {"Hodobox", "vinea"},
        
    };
    string meno;
    cin >> meno;

    cout << veduckovia.find(meno)->second << endl;

    return 0;
}