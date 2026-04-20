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
        vector<int> v(n);
        for (int &x:v) cin >> x;
        for (int i = 0; i < n; i++){
            int key = v[i], j = i-1;
            while (j>=0 && v[j] > key){
                v[j+1] = v[j];
                j--;
            }
            v[j+1] = key;
            cout << "Buoc " << i << ": ";
            for (int c = 0; c <=i; c++) cout << v[c] << " ";
            cout << endl;
        }
    }
    return 0;
}