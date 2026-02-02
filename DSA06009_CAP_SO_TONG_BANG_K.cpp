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
        vector <int> v(n);
        for (int &x : v) cin >> x;
        sort(v.begin(), v.end());
        int cnt = 0;
        for (int i = 0; i < n - 1; i++){
            for (int j = i+1; j < n; j++){
                if (v[i]+v[j]==k) cnt++;
                else if (v[i]+v[j] > k) break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}