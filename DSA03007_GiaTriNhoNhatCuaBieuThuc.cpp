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
        int n; cin >> n;
        int a[n], b[n];
        for (int &x:a) cin >> x;
        for (int &x:b) cin >> x;
        sort(a,a+n);
        sort(b,b+n, greater<int>());
        int sum =0;
        for (int i = 0; i < n; i++){
            sum += (a[i]*b[i]);
        }
        cout << sum << endl;
    }
    return 0;
}