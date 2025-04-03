#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define endl "\n"

using namespace std;

bool vst[51][51];
int board[51][51];
int m, n, k;
int t;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int cnt;

void dfs(int start_x, int start_y)
{
    queue<pair<int, int>> q;

    q.push({start_x, start_y});
    vst[start_x][start_y] = true;

    while (!q.empty())
    {
        int x = q.front().first, y = q.front().second;
        q.pop();

        rep(i, 0, 4)
        {
            if (board[x + dx[i]][y + dy[i]] == 1 && !vst[x + dx[i]][y + dy[i]])
            {
                vst[x + dx[i]][y + dy[i]] = true;
                q.push({x + dx[i], y + dy[i]});
            }
        }
    }
}

int main(void)
{
    fastio;

    cin >> t;
    while (t)
    {
        t--;
        cin >> m >> n >> k;
        memset(vst, false, sizeof(vst));
        memset(board, 0, sizeof(board));
        while (k)
        {
            k--;
            int x, y;
            cin >> x >> y;
            board[x][y] = 1;
        }
        cnt = 0;

        rep(i, 0, m)
        {
            rep(j, 0, n)
            {
                if (!vst[i][j] && board[i][j] == 1)
                {
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";

    }
}