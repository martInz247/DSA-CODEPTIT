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

vector<string> v, res;
int n, k;

void sinh(int a){
    if (res.size() == k){
        for (string x : res) cout << x << " ";
        cout << endl;
        return;
    }
    else {
        for (int i = a; i < v.size(); i++){
            res.pb(v[i]);
            sinh(i+1);
            res.pop_back();
        }
    }
}

signed main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
        cin >> n >> k;
        set <string> s;
        for (int i = 0; i < n; i++){
            string ss; cin >> ss;
            s.insert(ss);
        }
        for (string x:s){
            v.pb(x);
        }
        sinh(0LL);
    }
    return 0;
}