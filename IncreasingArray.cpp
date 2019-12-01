#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;
    long long int arr[size];
    long long int n;

    long long int count = 0;
    long long int lastValue = 0;

    for(int i = 0; i < size; i++) {
        cin >> n;
        arr[i] = n;

        if(i == 0) {
            lastValue = arr[0];
            continue;
        }

        if(i > 0 && lastValue > n)  {
            count += (lastValue - n);
        } else if(n > lastValue) {
            lastValue = n;
        }
    }

    cout << count << endl;

}