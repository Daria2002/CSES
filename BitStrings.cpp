#include <iostream>
#include <math.h>

using namespace std;

const unsigned int M = 1000000007;

long long int myPow(long long int n) {
    long long int res = 1;
    for(int i = 1; i <= n; i++) {
        res *= 2;
        if(res >= M) {
            res = res % M;
        }
    }

    return res;
}

int main() { 

    unsigned long long int n;
    cin >> n;

    unsigned long long int res = (myPow(n));

    cout << res;

}