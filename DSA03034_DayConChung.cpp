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
        int n,m,k; cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for (int &x:a) cin >> x;
        for (int &x:b) cin >> x;
        for (int &x:c) cin >> x;
        sort(a, a+n);
        sort(b, b+m);
        sort(c, c+k);
        int i = 0, j = 0, l = 0, cnt = 0;
        bool ex = false;
        while (i < n){
            
            while (b[j] <= a[i] && j < m){
                if (b[j] == a[i]){
                    while (c[l] <= b[j] && l < k){
                        if (c[l] == b[j]) {
                            cout << c[l] << " ";
                            ex = true;
                        }
                        l++;   
                    }
                }   
                j++;
                
            }
            i++;
        }
        if (!ex) cout << "NO\n";
         cout << endl;

    }
    return 0;
}