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

    int a[41], n, k;

    void input(){
        for (int i = 1; i <= k; i++) cin >> a[i];
    }


    void solve(){
        int i = k;
        while (a[i] == n - k + i && i > 0){
            i--;
        }
        //cout << i << " ";
        if (i == k) cout << 1 << endl;
        else{
            if (i){
            int init = k - i + 1, mx = a[i] + init, left = mx - (n - k + i), res = init - left;
            //cout << init << " " << mx << " " << left << " ";
            cout << res << endl;
        }
            else cout << k << endl;
        }
    }

    signed main() {
        fastio;
        
        int t = 1;
        cin >> t;
        while (t--) {
            cin >> n >> k;
            input();
            solve();
        }
        return 0;
    }