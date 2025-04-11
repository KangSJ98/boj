#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define endl "\n"

using namespace std;

int n;
int score[300001];
float sum;

int main(void)
{
    fastio;
    cin >> n;
    int del = round(n * 0.15);

    rep(i, 0, n)
    {
        cin >> score[i];
    }

    sort(score, score + n);
    rep(i, del, n - del)
    {
        sum += score[i];
    }
    if (n == 0)
    {
        cout << 0;
    }
    else
    {
        cout << round(sum / (n - 2 * del));
    }
}