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
        int a[n];
        for (int &x:a) cin >> x;
        int l[n], r[n];
        l[0] = 1, r[n-1] = 1;
        for (int i = 1; i < n; i++){
            if (a[i] > a[i-1]) {
                l[i] = l[i-1]+1;
            }
            else {
                l[i] = 1;
            }
        }    
        for (int i = n-2; i >= 0; i--){
            if (a[i] > a[i+1]) {
                r[i] = r[i+1]+1;
            }
            else {
                r[i]=1;
            }
        }    
        int mx = -1;
        for (int i = 0; i < n; i++){
            int len = l[i]+r[i]-1;
            mx = max(len, mx);
        }
        cout << mx << endl;
    }
    return 0;
}