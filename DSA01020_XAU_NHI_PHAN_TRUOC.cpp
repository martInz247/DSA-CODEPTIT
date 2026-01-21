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
int n = s.size();

void input(){
    for (int i = 1; i <= s.size(); i++) {
        a[i] = s[i - 1] - '0';
    }
}

void trace(){
    int i = s.size();
    bool remain = true;
    while (i > 0){
        if (remain){
            if (a[i] == 0) a[i] = 1;
            else{
                a[i] = 0;
                remain = false;
            }
        }
        i--;
    }
}

void display(){
    for (int i = 1; i <= s.size(); i++) cout << a[i];
    cout << endl;
}

signed main() {
    fastio;
    int t = 1;
     cin >> t;
    while (t--) {
        cin >> s;
        input();
        trace();
        display();
    }
    return 0;
}