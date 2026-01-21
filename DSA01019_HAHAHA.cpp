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

char a[17];
int n;
bool done = false;

void display(){
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}

void init(){
    for (int i = 1; i <= n; i++) a[i] = 'A';
}

void sinh(){
    int i = n;
    while (a[i] == 'H' && i > 0){
        a[i] = 'A';
        i--;
    }
    if (i) a[i] = 'H';
    else done = true;
}

bool check(){
    if (a[1] != 'H') return false;
    if (a[n] != 'A') return false;
    for (int i = 1; i < n; i++){
        if (a[i] == 'H' && a[i + 1] == 'H') return false;
    }
    return true;
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n;
        init();
        while (!done){
            if (check()) display();
            sinh();
        }
        done = false;
    }
    return 0;
}