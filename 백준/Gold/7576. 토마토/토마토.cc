#include <bits/stdc++.h>

using namespace std;

int n, m;
int box[1001][1001];
int cnt[1001][1001];
int min_day = 0;
bool chk_tomato;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void dfs()
{
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (box[i][j] == 1)
            {
                q.push({i, j});
            }
        }
    }

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (0 <= nx && nx < n && 0 <= ny && ny < m)
            {
                if (box[nx][ny] == 0)
                {
                    box[nx][ny] = 1;
                    cnt[nx][ny] = cnt[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main(void)
{
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> box[i][j];
        }
    }

    dfs();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (min_day < cnt[i][j])
            {
                min_day = cnt[i][j];
            }
            if (box[i][j] == 0)
            {
                chk_tomato = true;
            }
        }
    }

    if (chk_tomato)
    {
        cout << -1;
    }
    else
    {
        cout << min_day;
    }

    return 0;
}