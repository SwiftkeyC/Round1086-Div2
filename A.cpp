#include <iostream>
using namespace std;
#define ios ios::sync_with_stdio(false); cin.tie(nullptr)
int a[1001][1001];
int main() {
    ios;
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        int freq[10001] = {0};
        int mx = 0;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                cin >> a[i][j];
                freq[a[i][j]]++;
                mx = max(mx, freq[a[i][j]]);
            }
        }
 
        if(mx <= n * (n - 1)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
 
    return 0;
}