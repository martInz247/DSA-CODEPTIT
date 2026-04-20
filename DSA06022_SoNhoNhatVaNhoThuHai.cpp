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
vector <int> v;

int find(int n){
    for (int i = 0; i < n-1; i++){
        if (v[i] < v[i+1]) return i;
    }
    return -1;
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        v.resize(n);
        for (int &x: v) cin >> x;
        sort(v.begin(),v.end());
        int a = find(n);
        if (a == -1) cout << "-1\n";
        else cout << v[a] << " " << v[a+1] << endl;
    }
    return 0;
}