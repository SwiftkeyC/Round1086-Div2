#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
    ios;
 
    int t;
    cin >> t;
 
    cout << fixed << setprecision(10);
 
    while (t--){
        int n;
        cin >> n;
 
        vector<double> c(n + 1), p(n + 1), dp(n + 2, 0.0);
 
        for (int i = 1; i <= n; i++) {
            cin >> c[i] >> p[i];
        }
 
        dp[n + 1] = 0.0;
 
        for (int i = n; i >= 1; i--) {
            double q = 1.0 - p[i] / 100.0;
            dp[i] = max(dp[i + 1], c[i] + q * dp[i + 1]);
        }
 
        cout << dp[1] << '\n';
    }
 
    return 0;
}
