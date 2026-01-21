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

    int a[17], n, k;
    bool done = false;

    bool check(int k){
        int cnt = 0;
        for (int i = 1; i <= n; i++) if (a[i] == 1) cnt++;
        if (cnt == k) return true;
        else return false;
    }

    void sinh(){
        int i = n;
        while (a[i] == 1 && i > 0){
            a[i] = 0;
            i--;
        }
        if (i) a[i] = 1;
        else done = true;
    }

    void display(){
        for (int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
    }


    signed main() {
        fastio;
        
        int t = 1;
        cin >> t;
        while (t--) {
            cin >> n >> k;
            while (!done){
                if(check(k)) display();
                sinh();
            }
            done = false;
        }
        return 0;
    }