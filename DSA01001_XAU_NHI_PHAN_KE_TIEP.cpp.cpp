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

int a[1001];
string s;


void display(){
    for (int i = 1; i <= s.size(); i++) cout << a[i];
    cout << endl;
}

void sinh(){
    int i = s.size();
    while (a[i] == 1 && i > 0) {
        a[i] = 0;
        i--;
    }
    if (i) a[i] = 1;
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> s;
        int si = s.size();
        for (int i = 1; i <= si; i++){
            a[i] = (s[i - 1] - '0');
        }
        sinh();
         display();
    }
    return 0;
}