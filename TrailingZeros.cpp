#include <iostream>
using namespace  std;
#include <bits/stdc++.h> 

int main() {
    long long int n;
    cin >> n;

    long long int zeros = 0;
    
    // for(int i = 0; i <= n; i = i+5) {
    //     if(i == 0) {
    //         continue;
    //     }

    //     while(help % 5 == 0 && help > 0) {
    //         help /= 5;
    //         zeros++;
    //     }
    // }

    

    for(int i = 5; i <= n; i = i*5) {
        zeros += n/i;
    }

    cout << zeros << endl;

}