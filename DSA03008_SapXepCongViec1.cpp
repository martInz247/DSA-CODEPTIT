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

bool cmp(const pair<int,int> &a, const pair<int,int> &b){
    return a.se < b.se;
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int,int>> pi;
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        for (int i = 0; i < n; i++){
            pi.pb({a[i], b[i]});
        }
        sort(all(pi), cmp);
        int res = 0, last = -1;
        for (auto x:pi){
            if (x.fi >= last){
                res++;
                last = x.se;
            }
        }
        
        cout << res << endl;
    }
    return 0;
}