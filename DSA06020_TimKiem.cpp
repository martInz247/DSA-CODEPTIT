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

    vector<int> v;

    int bisearch(int n, int x){
        int lo = 0, hi = n - 1;
        while (lo <= hi){
            int mid = (lo+hi)/2;
            if (v[mid]==x) return mid + 1;

            if(v[mid]>=v[lo]){
                if (x > v[lo] && x < v[mid]) hi = mid - 1;
                else lo = mid + 1;
            }
            else {
                if (x > v[mid] && x < v[hi]) lo = mid + 1;
                else hi = mid - 1;
            }
        }
        return -1;
    }

    signed main() {
        fastio;
        
        int t = 1;
        cin >> t;
        while (t--) {
            int n, x; cin >> n >> x;
            v.resize(n);
            for (int &a : v) cin >> a;
            cout << bisearch(n, x) << endl;
        }
        return 0;
    }