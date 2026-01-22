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

int n, k, a[16], r[16];
bool done = false;

void init(){
    for (int i = 1; i <= k; i++) a[i] = i;
}

void input(){
    for (int i = 1; i <= k; i++) cin >> r[i];
}

void dis(){
    for (int i = 1; i <= k; i++) cout << a[i] << " ";
    cout << endl;
}

bool check(){
    for (int i = 1; i <= k; i++) if (a[i] != r[i]) return false;
    return true;
}

void sinh(){
    int i = k;
    while (a[i] == n - k + i && i > 0){
        i--;
    }
    if (i){
        ++a[i];
        for (int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
    }
    else done = true;
}

void solve(){
    int cnt = 1;
    while (!done){
        if (check()) {
        cout << cnt << endl;
        return;
        }
        ++cnt;
        sinh();
        
    }
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        input();
        init();
        solve();
    }
    return 0;
}