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

int a[11], n;
bool done = false;

void init(){
    for (int i = 1; i <= n; i++){
        a[i] = n-i+1;
    }
}

void revSinh(){
    int i = n-1;
    while (a[i] < a[i+1] && i > 0){
        i--;
    }
    if (i){
        int t = n;
        while (a[t] > a[i]) t--;
        swap(a[i], a[t]);
        sort(a+i+1, a+n+1, greater<>());
    }
    else done = true;
}

void display(){
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << " ";
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n;
        init();
        while (!done){
            display();
            revSinh();
        }
        cout << endl;
        done = false;
    }
    return 0;
}