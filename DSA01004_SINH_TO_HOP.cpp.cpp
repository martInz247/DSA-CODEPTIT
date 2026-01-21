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

int a[16], n, k;
bool done = false;

void init(){
    for (int i = 1; i <= k; i++) a[i] = i;
}

void sinh(){
    int i = k;
    while (a[i] == n - k + i && i > 0){
        i--;
    }
    if (i){
        a[i]++;
        for (int j = i+1; j <= n; j++) a[j] =a[j-1] + 1;
    }
    else done = true;
}

void display(){
    for (int i = 1; i <= k; i++) cout << a[i];
    cout << " ";
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        init();
        while (!done){
            display();
            sinh();
        }
        cout << endl;
        done = false;
    }
    return 0;
}