#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    int size;
    cin >> size;

    int arr[size+1] = {};
    arr[0] = 1;
    for(int i = 0; i < size-1; i++) {
        cin >> n;
        arr[n] = 1;
    }

    auto itr = find(arr, arr + size, 0);
    // same
    // cout << arr << endl;
    // cout << &arr[0] << endl;
    cout << distance(arr, itr);
}