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

int a[1001], n, k;

void display(){
    for (int i = 1; i <= k; i++) cout << a[i] << " ";
    cout << endl;
}

void sinh(){
    int i = k;
    while (a[i] == n - k + i && i > 0) i--;
    if (i) a[i]++;
    for (int j = i + 1; j <= k; j++){
        a[j] = a[j - 1] + 1;
    }
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
     while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= k; i++){
            int tmp; cin >> tmp;
            a[i] = tmp;
        }
        sinh();
        display();
    }
    return 0;
}