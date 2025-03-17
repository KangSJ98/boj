#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> xy;
int n, m;
int x, y;
int max_distance;
int max_idx;
int score;

int main(void)
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int tmpx, tmpy;
        cin >> tmpx >> tmpy;

        xy.push_back({tmpx, tmpy});
    }

    for (int i = 0; i < m; i++)
    {
        max_distance = 0;

        for (int j = 0; j < size(xy); j++)
        {
            int distance = pow((x - xy[j].first), 2) + pow((y - xy[j].second), 2);

            if (max_distance < distance)
            {
                max_idx = j;
                max_distance = distance;
            }
        }
        
        x = xy[max_idx].first;
        y = xy[max_idx].second;
        score += max_distance;
        xy.erase(xy.begin() + max_idx);

        int tmpx, tmpy;
        cin >> tmpx >> tmpy;
        xy.push_back({tmpx, tmpy});
    }
    cout << score;
}