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
        int n, x;
        cin >> n >> x;
        int cnt = 0;
        for (int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            if (tmp == x) cnt++;
        }
        if (cnt == 0) cout << "-1\n";
        else cout << cnt << endl;
    }
    return 0;
}