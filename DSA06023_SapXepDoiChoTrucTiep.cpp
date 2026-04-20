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
        int n, b = 1; cin >> n;
        vector <int> v(n);
        for (int &x:v) cin >> x;
        for (int i = 0; i < n - 1; i++){
            cout << "Buoc " << b++ << ": ";
            for (int j = i + 1; j < n; j++){
                if (v[j] < v[i]) swap(v[j], v[i]);
            }
            for (int x : v) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}