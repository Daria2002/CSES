#include <math.h>
#include <iostream>
using namespace std;

struct knight {
    int x;
    int y;
};

int main() {
    int n;
    knight k1;
    knight k2;

    cin >> n;

    // total number of positions (with duplicates)
    // pow(n, 2)-1 represents possible positions when one knight is 
    // at fixed position
    // pow(n, 2) represents possible positions for fixed knight
    long long total;

    // there are four shapes, each of them occurs (i-1)*(i-2) times, 
    // so there are no duplicates

    for(int i = 1; i <= n; i++) {
        total = (pow(i, 2)-1) * pow(i, 2);
        cout << total/2 - 4*(i-1)*(i-2) << endl;
    }
}
            