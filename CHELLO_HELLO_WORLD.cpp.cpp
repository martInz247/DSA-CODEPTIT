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

int a[20], n;

bool thuanNghich(){
    for (int i = 1; i <= n / 2; i++){
        if (a[i] != a[n - i + 1]) return false;
    }
    return true;
}

void sinh(){
    int i = n;
    while (a[i] == 1 && i > 0){
        a[i] = 0;
        i--;
    }
    a[i] = 1;
 //   for (int j = i + 1; j <= n; j++) a[j] = 0;
}

void display(){
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
}

signed main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i <pow(2,n); i++){
            if (thuanNghich()) display();
            sinh();
        }
    }
    return 0;
}