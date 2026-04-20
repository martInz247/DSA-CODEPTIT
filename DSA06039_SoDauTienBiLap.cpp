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
        vector <int> v(n);
        map<int, pair<int,int>> mp;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            if (mp.count(x)){
                mp[x].se++;
            }
            else{
                mp[x] = {i,1};
            }
        }
        vector<pair<int,int>> vp;
        for (auto x: mp){
            if (x.se.se > 1) vp.pb({x.fi, x.se.fi});
        }
        sort(vp.begin(), vp.end(),cmp);
        if (!vp.empty()) cout << vp[0].fi << endl;
        else cout << "NO\n";
    }
    return 0;
}