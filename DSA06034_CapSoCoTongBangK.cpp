#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fi first
#define se second
#define pii pair<int,int>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl "\n"

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int MOD = 1e9+7;
const int INF = 1e18;

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n];
        map<int,int> mp;
        for (int &x:a) {
            cin >> x;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++){
            int t = k - a[i];
            if (mp.count(t)) cnt += mp[t];
            mp[a[i]]++;
        }
        cout << cnt << endl;
    }
    return 0;
}