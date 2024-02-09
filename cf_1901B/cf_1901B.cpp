#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 200000;
 
int t;
 
int main() {
    cin >> t;
    for (int tc = 0; tc < t; ++tc) {
        int n;
        cin >> n;
        vector <int> cnt(n);
        long long res = 0;
        int cur = 0;
        for (int i = 0; i < n; ++i) {
            cin >> cnt[i];
            if (cnt[i] > cur) 
                res += cnt[i] - cur;
            cur = cnt[i];
        }
        
        cout << res - 1 << endl;
    }
    return 0;
}