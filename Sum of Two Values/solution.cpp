//
//  main.cpp
//  workspace
//
//  Created by Krishna Hariharan on 2/14/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long long n, x;
    cin >> n >> x;
    long long arr[n];
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                found = true;
                cout << i + 1 << " " << j + 1 << endl;
                break;
            }
        }
        if (found == true) {
            break;
        }
    }
    
    if (found == false) {
        cout << "IMPOSSIBLE" << endl;
    }
}
