#include <bits/stdc++.h>

using namespace std;

vector<int> node[1002];
bool dfs_vst[1002];
bool bfs_vst[1002];

vector<int> result_dfs;
vector<int> result_bfs;

void dfs(int x)
{
    dfs_vst[x] = true;
    result_dfs.push_back(x);

    for (int i = 0; i < node[x].size(); i++)
    {
        if (!dfs_vst[node[x][i]])
        {
            dfs(node[x][i]);
        }
    }
}

void bfs(int tmp)
{
    bfs_vst[tmp] = true;
    queue<int> q;
    q.push(tmp);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        result_bfs.push_back(x);

        for (int i = 0; i < node[x].size(); i++)
        {
            if (!bfs_vst[node[x][i]])
            {
                q.push(node[x][i]);
                bfs_vst[node[x][i]] = true;
            }
        }
    }
}

int main(void)
{
    int n, m, v;
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        node[tmp1].push_back(tmp2);
        node[tmp2].push_back(tmp1);
    }
    for (int i = 0; i < n+1; i++)
    {
        sort(node[i].begin(), node[i].end());
    }

    dfs(v);
    bfs(v);

    for (int i = 0; i < result_dfs.size(); i++)
    {
        cout << result_dfs[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < result_bfs.size(); i++)
    {
        cout << result_bfs[i] << " ";
    }

    return 0;
}