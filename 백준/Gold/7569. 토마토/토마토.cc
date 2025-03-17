#include <bits/stdc++.h>

using namespace std;

int m, n, h;

int box[101][101][101];
int cnt[101][101][101];
int min_day;
bool chk_tomato;

int dx[6] = {-1, 0, 0, 1, 0, 0};
int dy[6] = {0, -1, 0, 0, 1, 0};
int dz[6] = {0, 0, -1, 0, 0, 1};

queue<pair<pair<int, int>, int>> q;

int main(void)
{
    cin >> m >> n >> h;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> box[k][j][i];
                if (box[k][j][i] == 1)
                {
                    q.push({{k, j}, i});
                }
            }
        }
    }

    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;

        q.pop();

        for (int i = 0; i < 6; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];

            if (0 <= nx && nx < m && 0 <= ny && ny < n && 0 <= nz && nz < h)
            {
                if (box[nx][ny][nz] == 0)
                {
                    box[nx][ny][nz] = 1;
                    cnt[nx][ny][nz] = cnt[x][y][z] + 1;
                    q.push({{nx, ny}, nz});
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < h; k++)
            {
                if (min_day < cnt[i][j][k])
                {
                    min_day = cnt[i][j][k];
                }
                if (box[i][j][k] == 0)
                {
                    chk_tomato = true;
                }
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