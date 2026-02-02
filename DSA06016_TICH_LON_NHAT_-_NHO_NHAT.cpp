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
        int n, m; cin >> n >> m;
        vector<int> v1(n), v2(m);
        for (int &x : v1) cin >> x;
        for (int &x : v2) cin >> x;
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        cout << v1[v1.size()-1] * v2[0] << endl;
    }
    return 0;
}