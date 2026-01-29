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
        int n, s, x, sum = 0;
        cin >> n >> s >> x;
        vector <int> v(n);
        for (int &x : v){
            cin >> x;
            sum += x;
        }
        int targ = s - sum;
        if (targ < 0){
            cout << "No\n";
        }
        else{
            if (targ % x == 0) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}