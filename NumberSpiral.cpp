#include <iostream>
using namespace std;

long long int getValue(long long int r, long long int s) {

    if(r <= s) {
        if(s%2 == 0)
            return s*s-(s-1)-(s-r);
        return s*s-(r-1);
    } else {
        if(r % 2 == 0)
            return r*r - (s-1);
        return (r-1)*(r-1)+1+(s-1);
    }

}

int main() {

    long long int t;
    cin >> t;

    long long int matrix[t][2];

    for(int i = 0; i < t; i++) {
        cin >> matrix[i][0];
        cin >> matrix[i][1];
    }

    for(int i = 0; i < t; i++) {
        // y, x
        cout << getValue(matrix[i][0], matrix[i][1]) << endl;
    }

    

}