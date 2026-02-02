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
const int mx = 1e3+5;

vector<bool> nt(mx);
vector<int> snt;

void sieve(){
    nt[0] = nt[1] = true;
    for (int i = 2; i < mx; i++){
        if (!nt[i]){
            for (int j = i * i; j < mx; j+=i){
                nt[j] = true;
            }
        }
    }
    for (int i=2; i < mx; i++){
        if(!nt[i]) snt.push_back(i);
    }
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    sieve();
    while (t--) {
        int n; cin >> n;
        bool flg = false;
        for (int i = 0; i < snt.size(); i++){
            if (n - snt[i] > 0 && !nt[n-snt[i]]){
                cout << snt[i] << " " << n - snt[i] << endl;
                flg = true;
            }
            if (flg) break;
        }
        if (!flg) cout << "-1\n";

    }
    return 0;
}