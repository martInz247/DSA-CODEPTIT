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

int a[20];
int n;

void sinh(){
    int i = n;
    while (a[i] == 1 && i > 0){
        a[i] = 0;
        i--;
    }
    a[i] = 1;
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
        int k, cnt = 0;
        cin >> n >> k;
        vector <int> v(n + 1);
        for (int i = 1; i <= n; i++) cin >> v[i];
        for (int i = 0; i < pow(2,n); i++){
            int sum = 0;
            for (int j = 1; j <= n; j++){
                if (a[j] == 1) sum += v[j];
                if (sum > k) break;
            }
            if (sum == k){
                for (int j = 1; j <= n; j++){
                    if (a[j] == 1) cout << v[j] << " ";
                }
                cnt++;
                cout << endl;
            }
            sinh();
        }
        cout << cnt;
    }
    return 0;
}