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

int n, a[11], r[11];
bool done = false;

void init(){
    for (int i = 1; i <= n; i++) a[i] = i;
}

bool check(){
    for (int i = 1; i <= n; i++) {
        if (a[i] != r[i]) return false;
    }
    return true;
}

void sinh(){
    int i = n-1;
    while (a[i] > a[i+1] && i > 0){
        i--;
    }
    if (i){
        int t = n;
        while (a[i] > a[t]) t--;
        swap(a[i], a[t]);
        sort(a + i + 1, a + n + 1);
    }
    else {
        done = true;
    }
}

void display(){
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
}
 
int solve(){
    int res = 1;
    while (!done){
        if (check()) return res;
        sinh();
        res++;
    }
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n;
        init();
        for (int i = 1; i <= n; i++) cin >> r[i];
        cout << solve() << endl;
    }
    return 0;
}