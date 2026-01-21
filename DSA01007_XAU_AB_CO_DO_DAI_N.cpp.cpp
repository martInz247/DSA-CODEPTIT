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

char a[11];
int n;
bool done = false;

void init(){
    for (int i = 1; i <= n; i++) a[i] = 'A';
}

void display(){
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << " ";
}

void sinh(){
    int i = n; 
    while (a[i] == 'B' && i > 0){
        a[i] = 'A';
        i--;
    }
    if (i) a[i] = 'B';
    else done = true;
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
            sinh();
        }
        cout << endl;
        done = false;
    }
    return 0;
}