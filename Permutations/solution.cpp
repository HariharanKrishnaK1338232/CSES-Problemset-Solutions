#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    long long n; cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    } else if (n == 1) {
        cout << 1 << endl;
    } else {
        for (int i = n; i > 0; i -= 2) {
            cout << i << " ";
        }
        for (int j = n - 1; j > 0; j -= 2) {
            cout << j << " ";
        }
    }
}
