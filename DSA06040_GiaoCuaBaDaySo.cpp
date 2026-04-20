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

vector<int> v1,v2,v3;

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        v1.clear(); v2.clear(); v3.clear();
        int a,b,c; cin >> a >> b >> c;
        v1.resize(a);
        v2.resize(b);
        v3.resize(c);
        for (int &x:v1) cin >> x;
        for (int &x:v2) cin >> x;
        for (int &x:v3) cin >> x;
        int i = 0 , j = 0, k = 0;
        while (i < a && j < b && k < c){
            if (v1[i] == v2[j] && v2[j] == v3[k]){
                cout << v1[i] << " ";
                i++;
                j++;
                k++;
            }
            else{
                int mn = min({v1[i], v2[j], v3[k]});
                if (mn == v1[i]) i++;
                else if (mn == v2[j]) j++;
                else k++;
            }
        }
      
    }
    return 0;
}