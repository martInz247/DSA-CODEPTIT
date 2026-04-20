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

        int par[100000], num[100000];

        int find(int u){
            if (u == par[u]) return u;
            return par[u] = find(par[u]);
        }

        void unite(int u, int v){
            u = find(u);
            v = find(v);
            if (u == v) return;
            if (num[u] < num[v]) swap(u,v);
            par[v] = u;
            num[u] += num[v];
        }

        signed main() {
            fastio;
            
            int t = 1;
            //  cin >> t;
            while (t--) {
                int v, e; cin >> v >> e;
                for (int i = 1; i <= v; i++){
                    par[i] = i;
                    num[i] = 1;
                }
                while (e--){
                    int a, b; cin >> a >> b;
                    unite(a, b);    
                }
                int cnt = 0, mx = 0;
                for (int i = 1; i <= v; i++){
                    if (par[i] == i) cnt++;
                }
                cout << cnt << endl;
            }
            return 0;
        }