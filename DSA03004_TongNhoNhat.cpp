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
        for (int &i : a) cin >> i;
        sort(a, a+n);
        int s1 = 0, s2 = 0;
        for (int i = 0; i < n; i+=2) s1 = s1*10+a[i];
        for (int i = 1; i < n; i+=2) s2 = s2*10+a[i];
        cout << s1 + s2 << endl;
    }
    return 0;
}