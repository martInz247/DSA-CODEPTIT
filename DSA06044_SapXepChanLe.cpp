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
    // cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n/2+1], b[n/2+1];
        int c1=1, c2=1;
        for (int i = 1; i <= n; i++){
            if (i%2==0) cin >> b[c2++];
            else cin >> a[c1++];
        }
        sort(a+1, a+c1);
        sort(b+1, b+c2, greater<>());
        c1=1, c2=1;
        for (int i = 1; i <= n; i++){
            if (i%2==0) cout << b[c2++] << " ";
            else cout << a[c1++] << " ";
        }
        
    }
    return 0;
}