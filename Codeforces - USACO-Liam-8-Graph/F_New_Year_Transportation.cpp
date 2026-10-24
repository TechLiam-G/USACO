//  F. New Year Transportation

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
    }
    int curr = 1;
    while (curr < t) {
        curr += a[curr];
    }

    if (curr == t) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
