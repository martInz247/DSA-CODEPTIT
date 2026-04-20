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
        string s; cin >> s;
        int a[26] = {0};
        for (int i = 0; i < s.size(); i++){
            a[s[i]-'A']++;
        }
        int mx = *max_element(a, a+26);
        if ((s.size()+1)/n >= mx) cout << "1\n";
        else cout << "-1\n";
    }
    return 0;
}