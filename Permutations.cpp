#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 1) {
        cout << n << endl;
    }

    vector<int> v;
    
    for(int i = 2; i <= n; i = i + 2) {
        v.push_back(i);
    }
    
    for(int i = 1; i <= n; i = i + 2) {
        v.push_back(i);
    }

    // check that adjancent el have dif more than 1
    bool check = true;
    for(int i = 0; i < n-1; i++) {
        if(abs(v[i]-v[i+1]) <= 1) {
            check = false;
        }
    }
    
    if(check) {
        for(int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } else {
        cout << "NO SOLUTION" << endl;
    }
}

/*
example
5 (1, 2, 3, 4, 5)
4 2 5 3 1

3 (1, 2, 3)
NO SOLUTION


*/