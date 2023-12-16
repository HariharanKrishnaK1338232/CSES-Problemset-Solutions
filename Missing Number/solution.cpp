#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    int n, x; cin >> n;
    int arr[n];

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] != arr[i] + 1) {
            x = (arr[i + 1]) - 1;
        }
    }
    cout << x << endl;
}
