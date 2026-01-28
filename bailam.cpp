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
int a[31];

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
        for (int j = i+1; j <= k; j++) a[j] = a[j-1]+1;
    }
    else done = true;
}

void display(vector<string> s){
    for (int i = 1; i <= k; i++){
        cout << s[a[i]-1] << " ";
    }
    cout << endl;
}

void in(){
    for (int i = 1; i <= k; i++) cout << a[i] << " ";
    cout << endl;
}

signed main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
        cin >> n >> k;
        init();
        set<string> ss;
        for (int i = 0; i < n; i++){
            string tmp;
            cin >> tmp;
            ss.insert(tmp);
        }
        vector <string> s;
        for (string x : ss) s.push_back(x);
        n = s.size();
        while (!done){
            display(s);
            sinh();
        }
    }
    return 0;
}