#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    string n; cin >> n;
    int counter = 1, best = 0;

    for (int i = 0; i < n.length(); i++) {
        if (n[i + 1] != n[i]) {
            counter = 0;
        }
        counter++;
        best = max(counter, best);
    }

    cout << best << endl;
}
