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
    return (a.se > b.se) || ((a.se == b.se && a.fi < b.fi));
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            mp[tmp]++;
        }
        vector <pair<int, int>> v;
        for (auto x : mp){
            v.pb({x.fi,x.se});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto x : v){
            for (int i = 0; i < x.se; i++){
                cout << x.fi << " ";
            }
        }
        cout << endl;
    }
    return 0;
}