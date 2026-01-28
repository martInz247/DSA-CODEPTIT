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

int n, a[17];
bool done = false;

void init(){
    for (int i = 1; i <= n; i++) a[i] = 6;
}

void display(){
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}

bool check(){
    if (a[1] != 8 || a[n] != 6) return false;
    
    for (int i = 1; i < n; i++) if (a[i] == 8 && a[i+1] == 8) return false;

    for (int i = 1; i < n-2; i++){
        if (a[i] == 6){
            int cnt = 0;
            for (int j = i+1; j <= i+3; j++){
                if (a[j] == 6) cnt++;
            }
            if (cnt == 3) return false;
        }
    }
    return true;
}

void sinh(){
    int i = n; 
    while (a[i] == 8 && i > 0){
        a[i] = 6;
        i--;
    }
    if (i) a[i] = 8;
    else done = true;
}

signed main() {
    fastio;
    
    int t = 1;
    //cin >> t;
    while (t--) {
        cin >> n;
        init();
        while (!done){
            if (check()) display();
            sinh();
        }
    }
    return 0;
}