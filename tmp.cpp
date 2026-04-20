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
    
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    int n; cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    vector<int> tru;

    for (int removed = 0; removed < n; removed++){
        bool visited[n] = {};
        int start = -1;
        for (int i = 0; i < n; i++){
            if (i != removed){
                start = i;
                break;
            }
        }

        queue<int> q;
        q.push(start);
        visited[start] = true;

        int dem = 1;

        while (!q.empty()){
            int u = q.front(); q.pop();

            for (int v = 0; v < n; v++){
                if (v == removed) continue; 

                if (a[u][v] == 1 && !visited[v]){
                    visited[v] = true;
                    q.push(v);
                    dem++;
                }
            }
        }

        if (dem < n - 1){
            tru.pb(removed);
        }
    }

    cout << tru.size() << endl;
    for (int x : tru) cout << x + 1 << " ";

    return 0;
}