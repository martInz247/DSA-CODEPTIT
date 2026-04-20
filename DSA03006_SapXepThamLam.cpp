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
        for (int i = 0; i <= n/2; i++ ){
            if (a[i] > a[n-i-1]) reverse(a+i, a+n-i);
        }
        bool check = true;
        for (int i = 0; i < n-1; i++){
            if (a[i] > a[i+1]) {
                check = false;
                break;
            }
        }
        if (check) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}