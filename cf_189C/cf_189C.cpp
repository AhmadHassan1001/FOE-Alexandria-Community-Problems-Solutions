/**
 * Submission: https://vjudge.net/solution/48853818
*/

#include <bits/stdc++.h>

using namespace std;

#define int long long


void solve(){
    int n;
    cin >> n;
    int a[n], b[n];
    int p = 0, cnt = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) {
        if(a[p] == b[i]) p++;
        else cnt++;
    }
    cout << cnt << '\n';
}

bool multiple = false;


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    if(multiple) cin >> t;
    while(t--) solve();

}