#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    long long n; cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long first = arr[0], second, counter1 = 0, counter2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == first) {
            counter1 += 1;
        } else {
            second = arr[i];
            counter2 += 1;
        }
    }

    if (counter1 >= n/2) {
        cout << first << endl;
    } else {
        cout << second << endl;
    }

}
