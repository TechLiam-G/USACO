#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> f(n);
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    for (int i = 0; i < n; i++){
        int j = f[i];
        int k = f[j];
        if (f[k] == i){
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
}