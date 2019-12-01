#include <iostream>
#include <math.h>
#include <set>
#include <algorithm>

using namespace std;

int main() {

    long long int n;
    cin >> n;

    // sum of all elements
    long long int sum = n * (n+1) / 2;
    // there is no solution
    if(sum % 2 == 1) {
        std::cout << "NO" << endl;
        return 0;
    }
    // calculate target
    long long int target = sum / 2; // two sets

    set<long long int> set1;
    set<long long int> set2;

    for(int i = 1; i < n; i++) {
        set2.insert(i);
    }

    // set1 contains last element
    set1.insert(n);

    // initialize sum of set1
    long long int sum1 = n;

    // add each element of arr in set1 till sum1 is not higher or equal to target
    for(long long int i = 1; i <= n; i++) {
        // if sum1 is higher or equal to target 
        if(sum1 < target) {
            // add elements to set1 
            set1.insert(i);
            set2.erase(i);
            // increase sum1
            sum1 += i;   
        } else {
            break;
        }
    }

    long long int removalElement = sum1 - target;
    if(removalElement > 0) {
        set1.erase(removalElement);
        set2.insert(removalElement);
    }

    //print result
    std::cout << "YES" << endl;
    std::cout << set1.size() << endl;
    for(long long int el:set1) {
        cout << el << " ";
    }
    std::cout << endl;

    std::cout << set2.size() << endl;
    for(long long int el:set2) {
        cout << el << " ";
    }
}