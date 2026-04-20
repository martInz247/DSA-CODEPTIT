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

bool cmp(const pair<char, int> &a, const pair<char, int> &b){
    return a.se > b.se;
}

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();
        vector<int> cnt(26, 0);
        for(int i =0 ; i<s.size();i++)
            cnt[s[i] - 'a']++;
        int tmp = *max_element(cnt.begin(), cnt.end());
        if(tmp <= ((n+1)/2)) cout<<"1\n";
        else cout<<"-1\n"; 
    }
    return 0;
}