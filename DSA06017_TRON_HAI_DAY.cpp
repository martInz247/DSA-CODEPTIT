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
        vector <int> a(n), b(m);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        //int mx = n > m ? n:m;
        int s1 = 0, s2 = 0;
        vector<int> res;
        while (s1 < n && s2 < m){
            if (a[s1] < b[s2]){
                res.push_back(a[s1]);
                s1++;
            }
            else if (a[s1] > b[s2]){
                res.push_back(b[s2]);
                s2++;
            }
            else {
                res.push_back(a[s1]);
                s1++;
                s2++;
            }
        }
        while (s1 < n) res.pb(a[s1++]);
        while (s2 < m) res.pb(b[s2++]);
        for (int x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}