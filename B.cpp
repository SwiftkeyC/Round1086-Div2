#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
    fast
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k, p;
        ll m;
        cin >> n >> k >> p >> m;
 
        vector<ll> cost(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> cost[i];
        }
 
        deque<int> q;
        for (int i = 1; i <= n; i++) {
            q.push_back(i);
        }
 
        int ans = 0;
 
        while (true) {
            int Pos = -1;
 
            for (int i = 0; i < k; i++) {
                if (q[i] == p) {
                    Pos = i;
                    break;
                }
            }
 
            if (Pos != -1) {
                if (cost[p] > m) break;
 
                m -= cost[p];
                ans++;
 
                q.erase(q.begin() + Pos);
                q.push_back(p);
            } else {
                int Pos = 0;
                for (int i = 1; i < k; i++) {
                    if (cost[q[i]] < cost[q[Pos]]) {
                        Pos = i;
                    }
                }
 
                int id = q[Pos];
                if (cost[id] > m) break;
 
                m -= cost[id];
                q.erase(q.begin() + Pos);
                q.push_back(id);
            }
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}
