#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;
    cin >> str;

    map<char, int> map;

    int max = 0;

    for(string::size_type i = 0; i < str.size(); i++) {
        map[str.at(i)]++;
        if(i > 0 && str.at(i) != str.at(i-1)) {
            map[str.at(i-1)] = 0;
        } else if(map[str.at(i)] > max)
            max = map[str.at(i)];
    }

    cout << max << endl;

}