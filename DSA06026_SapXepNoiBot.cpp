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
        int n; cin >> n;
        vector <int> v(n);
        for (int &x:v) cin >> x;
        int i = 1;
        for (int i = 0; i < n-1; i++) {
            bool flg = false;
            for (int j = 0; j < n-1; j++){
                if (v[j] > v[j+1]) {swap(v[j], v[j+1]);flg = true;}
            }
            if (flg){
                cout << "Buoc " << i+1 << ": ";
            for (int x:v) cout << x << " ";
            cout << endl;
            }
            else break;
            
        }
    }
    return 0;
}