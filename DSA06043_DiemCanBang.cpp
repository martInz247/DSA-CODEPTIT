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
        for (int &i:v) cin >> i;
        int left[n], right[n];
        left[0] = v[0], right[n-1] = v[n-1];
        for (int i = 1; i < n; i++) left[i] = left[i-1] + v[i];
        for (int i = n-2; i >= 0; i--) right[i] = right[i+1] + v[i];
        bool tt = false;
        for (int i = 0; i < n; i++) {
            if (left[i] == right[i]) {
                cout << i+1 << endl;
                tt = true;
                break;
            }
        }
        if (!tt) cout << "-1\n";
    }
    return 0;
}