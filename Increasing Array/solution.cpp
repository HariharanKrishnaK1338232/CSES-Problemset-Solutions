#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    long long n, counter = 0; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i + 1] < arr[i]) {
            counter += arr[i] - arr[i + 1];
            arr[i + 1] = arr[i];
        }
        else {
            counter = counter;
        }
    }

    cout << counter << endl;
}
