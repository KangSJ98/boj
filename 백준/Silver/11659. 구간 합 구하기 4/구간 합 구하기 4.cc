#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define endl "\n"

using namespace std;

int n, m;
int sum[100002];
int sumsum;

int main(void)
{
    fastio;
    cin>>n>>m;
    rep(i, 1, n + 1)
    {
        int tmp;
        cin >> tmp;
        sumsum += tmp;
        sum[i] = sumsum;
    }

    rep(i, 0, m)
    {
        int a, b;
        cin>>a>>b;
        cout<<sum[b] - sum[a-1]<<"\n";
    }
}