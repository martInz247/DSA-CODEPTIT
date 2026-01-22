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
bool done = false;
int a[11];

void init(){
    for (int i = 1; i <= k; i++) a[i] = i;
}

void sinh(vector<int>v){
    int i = k;
    while (a[i] == v.size() - k + i && i > 0){
        i--;
    }
    if (i){
        a[i]++;
        for (int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
    }
    else done = true;
}

void display(vector<int> v){
    for (int i = 1; i <= k; i++){
        cout << v[a[i] - 1] << " ";
    }
    cout << endl;
}

signed main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
        cin >> n >> k;
        set <int> s;
        for (int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            s.insert(tmp);
        }
        init();
        int i = 0;
        vector<int> v;
        for (int x:s){
            v.push_back(x);
        }
        int si = v.size();
        while (!done){
            display(v);
            sinh(v);
        }
    }
    return 0;
}