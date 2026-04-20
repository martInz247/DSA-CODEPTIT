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
        int idx = -1;
        for (int i = 0; i < n-1; i++){
            if (a[i] > a[i+1]){
                idx = i;
                break;
            }
        }
        if (idx == -1) cout << "0\n";
        else cout << idx + 1 << endl;
    }
    return 0;
}