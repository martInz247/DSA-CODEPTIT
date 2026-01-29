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
        int n,m; cin >> n >> m;
        vector<int> a, b, hop, giao;
        set<int> tmp1, tmp2;
        for (int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            tmp1.insert(tmp);
        }
        for (int i = 0; i < m; i++){
            int tmp; cin >> tmp;
            tmp2.insert(tmp);
        }
        for (int x : tmp1) a.push_back(x);
        for (int x : tmp2) b.push_back(x);
        int i = 0, j = 0;
            while (i < a.size() && j < b.size()){
                if (a[i] < b[j]){
                hop.push_back(a[i]);
                i++;
            }
            else if (a[i] > b[j]){
                hop.push_back(b[j]);
                j++;
            }
            else {
                hop.push_back(a[i]);
                giao.push_back(a[i]);
                i++, j++;
            }
            }
            while (i < a.size()){
            hop.pb(a[i]);
            i++;
        }
        while (j < b.size()){
            hop.pb(b[j]);
            j++;
        }
            for (int i : hop) cout << i << " ";
            cout << endl;
            for (int i : giao) cout << i << " ";
            cout << endl;

    }
    return 0;
}