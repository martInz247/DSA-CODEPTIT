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

bool nt[100005];
int n, k, cnt = 1;
vector <int> v;

void sieve(){
    nt[0] = nt[1] = true;
    for (int i = 2; i * i <= 100005; i++){
        if (!nt[i]){
            for (int j = i * i; j <= 100005; j += i){
                nt[j] = true;
            }
        }
    }
}

void comb(int st){
    if (v.size() == k){
        if (!nt[cnt]){
            cout << cnt << ": ";
            for (int i : v) cout << i << " ";
            cout << endl;
        }
        cnt++;
    }
    else {
        for (int i = st; i <= n; i++){
                v.pb(i);
                comb(i+1);
                v.pop_back();
        }
    }
}



signed main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
        sieve();
        cin >> n >> k;
        comb(1);
    }
    return 0;
}