#include <bits/stdc++.h>

using namespace std;

vector<string> grid;
vector<string> blind_grid;
int cnt, blind_cnt;
int n;

void area(int x, int y, char color)
{
    grid[x][y] = 'o';
    if (grid[max(x - 1, 0)][y] == color)
    {
        area(max(x - 1, 0), y, color);
    }
    if (grid[x][max(y - 1, 0)] == color)
    {
        area(x, max(y - 1, 0), color);
    }
    if (grid[min(x + 1, n - 1)][y] == color)
    {
        area(min(x + 1, n - 1), y, color);
    }
    if (grid[x][min(y + 1, n - 1)] == color)
    {
        area(x, min(y + 1, n - 1), color);
    }
}
void blind_area(int x, int y, char color)
{
    blind_grid[x][y] = 'o';
    if (blind_grid[max(x - 1, 0)][y] == color)
    {
        blind_area(max(x - 1, 0), y, color);
    }
    if (blind_grid[x][max(y - 1, 0)] == color)
    {
        blind_area(x, max(y - 1, 0), color);
    }
    if (blind_grid[min(x + 1, n - 1)][y] == color)
    {
        blind_area(min(x + 1, n - 1), y, color);
    }
    if (blind_grid[x][min(y + 1, n - 1)] == color)
    {
        blind_area(x, min(y + 1, n - 1), color);
    }
}

int main(void)
{
    cin >> n;

    string tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        grid.push_back(tmp);
        for (int j = 0; j < n; j++)
        {
            if (tmp[j] == 'R')
            {
                tmp[j] = 'G';
            }
        }
        blind_grid.push_back(tmp);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] != 'o')
            {
                area(i, j, grid[i][j]);
                cnt++;
                // cout<<"i : "<<i<<" j : "<<j<<" color : "<<grid[i][j]<<" cnt : "<<cnt<<endl;
            }
            if (blind_grid[i][j] != 'o')
            {
                blind_area(i, j, blind_grid[i][j]);
                blind_cnt++;
                // cout<<"i : "<<i<<" j : "<<j<<" color : "<<blind_grid[i][j]<<" cnt : "<<blind_cnt<<endl;
            }
        }
    }
    cout << cnt << " " << blind_cnt;
}