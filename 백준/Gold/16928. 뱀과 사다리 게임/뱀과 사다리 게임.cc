#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<pair<int, int>> ladder;
vector<pair<int, int>> snake;

bool vst[106];
int cnt[106];
bool goal;
queue<int> q;

int chk_ladder(int x)
{
    for(int i=0; i<size(ladder); i++){
        if (x == ladder[i].first){
            return ladder[i].second;
        }
    }
    return x;
}

int chk_snake(int x)
{
    for(int i=0; i<size(snake); i++){
        if (x == snake[i].first){
            return snake[i].second;
        }
    }
    return x;
}

int main(void)
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        ladder.push_back({x, y});
    }

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        ladder.push_back({u, v});
    }

    q.push(1);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        for (int i = 1; i < 7; i++)
        {
            int nx = x + i;
            nx = chk_ladder(nx);
            nx = chk_snake(nx);

            if(!vst[nx]){
                vst[nx] = true;
                cnt[nx] = cnt[x] + 1;
                q.push(nx);
            }

            if (nx == 100){
                goal = true;
                break;
            }

        }
        if (goal){
            break;
        }
    }

    cout<<cnt[100];
}