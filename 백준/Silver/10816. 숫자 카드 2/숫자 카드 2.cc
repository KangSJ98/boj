#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(), v.end());

    cin >> m;
    while (m--) {
        int x;
        cin >> x;
        auto lower = lower_bound(v.begin(), v.end(), x);
        auto upper = upper_bound(v.begin(), v.end(), x);
        cout << upper - lower << " ";
    }
    return 0;
}
