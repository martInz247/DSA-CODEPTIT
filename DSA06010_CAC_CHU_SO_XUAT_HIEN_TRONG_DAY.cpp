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
        set<int> s;
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            while (a!=0){
                int tmp = a%10;
                 s.insert(tmp);
                 a /= 10;
            }
        }
        for (int x : s) cout << x << " ";
        cout << endl;
    }
    return 0;
}