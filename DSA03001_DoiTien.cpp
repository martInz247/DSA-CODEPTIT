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

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        stack <int> st;
        st.push(1);
        st.push(2);
        st.push(5);
        st.push(10);
        st.push(20);
        st.push(50);
        st.push(100);
        st.push(200);
        st.push(500);
        st.push(1000);
        int cnt = 0;
        while (!st.empty()){
            int c = st.top();
            st.pop();
            while (n >= c && n > 0){
                cnt++;
                n -= c;
            }
        }
        cout << cnt << endl;

    }
    return 0;
}