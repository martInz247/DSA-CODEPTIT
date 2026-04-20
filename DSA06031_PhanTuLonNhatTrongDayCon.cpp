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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for (int &x:v) cin >> x;
        deque <int> deq;
        deq.push_back(0);
        for (int i = 1; i < n; i++){
            while (!deq.empty() && v[deq.back()] < v[i]) deq.pop_back();
            deq.push_back(i);
            if (deq.front() + k <= i) deq.pop_front();
            if (i >= k-1 ) cout << v[deq.front()] << " ";
        }
        cout << endl;
    }
    return 0;
}