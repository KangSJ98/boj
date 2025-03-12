#include <bits/stdc++.h>

using namespace std;

int board[101][101];
bool vst[101][101];
int cnt[101][101];
int n, m;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void bfs(int x, int y)
{
    vst[x][y] = true;

    queue<pair<int, int>> q;
    q.push(make_pair(x, y));

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int next_x = x + dx[i];
            int next_y = y + dy[i];

            if (0 <= next_x && next_x < n && 0 <= next_y && next_y < m)
            {
                if (board[next_x][next_y] == 1 && !vst[next_x][next_y])
                {
                    cnt[next_x][next_y] = cnt[x][y] + 1;
                    vst[next_x][next_y] = true;
                    q.push(make_pair(next_x, next_y));
                }
            }
        }
    }
}

int main(void)
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        for (int j = 0; j < m; j++)
        {
            board[i][j] = tmp[j] - '0';
        }
    }

    bfs(0, 0);

    cout<<cnt[n-1][m-1] + 1;
    
    return 0;
}
