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

int to_least(int n){
    vector <int> a;
    while (n != 0){
        a.pb(n%10);
        n/=10;
    }
    for (int i = 0; i < a.size()-1; i++) if (a[i] == 6) a[i] = 5;
    int rebuild = 0;
    for (int i = a.size(); i >= 0; i--){
        rebuild  = 10*rebuild + a[i];
    }
    return rebuild;
}

int to_max(int n){
    vector <int> a;
    while (n != 0){
        a.pb(n%10);
        n/=10;
    }
    for (int i = 0; i < a.size(); i++) if (a[i] == 5) a[i] = 6;
    int rebuild = 0;
    for (int i = a.size() - 1; i >= 0; i--){
        rebuild  = 10*rebuild + a[i];
    }
    return rebuild;
}

signed main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int l_a = to_least(a), l_b = to_least(b);
        cout << l_a + l_b << " ";
        int m_a = to_max(a), m_b = to_max(b);
        cout << m_a + m_b;
    }
    return 0;
}