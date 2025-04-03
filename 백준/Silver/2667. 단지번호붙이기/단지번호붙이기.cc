#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define endl "\n"

using namespace std;

bool vst[26][26];
int board[26][26];
int n;
int t;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int cnt;
vector<int> house;

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
                house[cnt]++;
                vst[x + dx[i]][y + dy[i]] = true;
                q.push({x + dx[i], y + dy[i]});
            }
        }
    }
}

int main(void)
{
    fastio;

    cin >> n;
    rep(i, 0, n){
        string tmp;
        cin>>tmp;
        rep(j, 0, n){
            board[i][j] = tmp[j] - '0';
        }
    }

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            if (!vst[i][j] && board[i][j] == 1)
            {
                house.push_back(1);
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    sort(house.begin(), house.end());
    rep(i, 0, size(house)){
        cout<<house[i]<<"\n";
    }

}