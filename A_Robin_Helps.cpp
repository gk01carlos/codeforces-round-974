#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
void testcase() {
    int n,k;
    cin >> n >> k;
    int ans = 0;
    int gold = 0;
    for (int i = 1; i <= n; ++i) {
        int c;
        cin >> c;
        if (c > 0 && c >= k) gold += c;
        if (c == 0 && gold > 0) {
            --gold;
            ++ans;
        }
    }
    cout << ans << endl;
}
int main() {
     ios::sync_with_stdio(false);
     cin.tie(nullptr); cout.tie(nullptr);
     int tt;
     cin >> tt;
     for (int i = 0; i < tt; ++i)
        testcase();
    return 0;
}