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

int a[1001], n;

void display(){
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
}

void input(){
    for (int i = 1; i <= n; i++) cin >> a[i];
}

void nextperm(){
    int i = n-1, t = n;
    while (a[i] > a[i + 1] && i > 0){
        i--;
    }
    if (i){
        while (a[i] > a[t]) t--;
        swap(a[i], a[t]);
        sort(a+i, a+n);
    }
    else{
        sort(a+1, a+n+1);
    }
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n;
        input();
        nextperm(); 
        display();
    }
    return 0;
}