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

int n, k;
char a[17];
bool done = false;

void init(){
    char st = 'A';
    for (int i = 1; i <= k; i++){
        a[i] = st;
        st++;
    }
}

void display(){
    for (int i = 1; i <= k; i++) cout << a[i];
    cout << endl;
}

void sinh(){
    int i = k;
    while (i >= 1 && a[i] == char('A' + (n - k + i - 1))){
        i--;
    }
    if (i) {
        a[i] = a[i] + 1;
        for (int j = i+1; j <= k; j++) {a[j] = a[j-1] + 1;}
        
    }
    else done = true;
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
        done = false;
    }
    return 0;
}