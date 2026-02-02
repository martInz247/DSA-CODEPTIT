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
        vector <int> v(n);
        for (int &x : v) cin >> x;
        int mx = 2e6+5; 
        for (int i = 0 ; i < n-1; i++){
            for (int j = i+1; j < n; j++){
                if (abs(v[j]+v[i]) < abs(mx)) mx = v[i]+v[j];
            }
        }
        cout << mx << endl;
    }
    return 0;
}