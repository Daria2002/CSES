#include <iostream>

using namespace std;

struct test
{
    long long int a;
    long long int b;
};


int main() {

  

    long long int t;
    cin >> t;

    test tests[t];

    for(long long int i = 0; i < t; i++) {
        cin >> tests[i].a;
        cin >> tests[i].b;
    }

    for(long long int i = 0; i < t; i++) {
        if(tests[i].a == tests[i].b && tests[i].a % 3 == 0) {
            cout << "YES" << endl;
        } else if((tests[i].a > 0 && tests[i].b == 0) ||
        (tests[i].b > 0 && tests[i].a == 0)) {
            cout << "NO" << endl;
        } else if((tests[i].a == 1 && tests[i].b == 2) || 
        (tests[i].b == 1 && tests[i].a == 2)) {
            cout << "YES" << endl;
        } else if(tests[i].a / 2 == tests[i].b / 3 || 
        tests[i].a / 3 == tests[i].b / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}

