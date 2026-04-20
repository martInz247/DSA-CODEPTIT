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

    bool cmp(const pair<int,int> &a, const pair<int,int> &b){
        return (a.fi < b.fi) || (a.fi == b.fi && a.se > b.se);
    }

    signed main() {
        fastio;
        
        int t = 1;
        cin >> t;
        while (t--) {
            int n; cin >> n;
            vector<pair<int,int>> pi;
            for (int i = 0; i < n; i++){
                int a, b, c; cin >> a >> b >> c;
                pi.pb({b, c});
            }
            sort(all(pi), cmp);
            int sum = 0, en = 0, cnt=0;
            for (auto x: pi){
                if (x.fi > en){
                    en = x.fi;
                    sum += x.se;
                    cnt++;
                }
            }
            cout << cnt << " " << sum << endl;

        }
        return 0;
    }