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
        int a[n], b[m];
        for (int &x:a) cin >> x;
        for (int &x:b) cin >> x;
        sort(a, a+n);
        sort(b, b+m);
        int i = 0, j = 0, cnt = 0;
        while (i < n && j < m){
            int res = 0;
            for (int i = 0; i < a[i]; i++){
                res += log(b[j])/log(a[i]);
            }
            if (b[j] > res) cnt++;
            if (b[j] > res) i++;
            else j++;
        }
        cout << cnt << endl;
    }
    return 0;
}