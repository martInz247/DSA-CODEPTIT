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
        int n, e, cnt =0; cin >> n >> e;
        vector<int> v(n);
        for (int &x:v) cin >> x;
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 2; i++){
            for (int j = i + 1; j < n - 1; j++){
                int tmp = e - v[i] - v[j];
                auto tar=v.begin();
                auto pos = lower_bound(v.begin() + j + 1, v.end(),tmp);
                if (pos!=v.end()){
                    tar = pos - 1;
                }
                else tar = v.end() - 1;
                cnt += (tar - (v.begin()+j+1)+ 1);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}