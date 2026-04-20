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
        int n, s, m, du = 0;
        cin >> n >> s >> m;
        int ex = s / 7;
        if (m > n) cout << "-1\n";
        else{
            if (m*s > n * (s-ex)) cout <<"-1\n";
            else{
                int du = 0, res = 0;
                while (s > 0){
                int acu = n + du;
                s -= acu / m ;
                du = acu % m;
                res++;
            }
            cout << res << endl;
            }
            
        }
    }
    return 0;
}