#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int board[1001][1001];
bool vst[1001][1001];
int cnt[1001][1001];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int n, m;
pair<int, int> start;
vector<pair<int, int>> bfs;

int main(void){
    fastio;

    cin>>n>>m;

    rep(i, 0, n){
        rep(j, 0, m){
            cin>>board[i][j];
            if (board[i][j] == 2){
                start = {i, j};
            }
        }
    }

    vst[start.first][start.second] = true;
    queue<pair<int, int>> q;
    q.push({start.first, start.second});

    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        rep(i, 0, 4){
            if (!vst[x + dx[i]][y + dy[i]] && board[x + dx[i]][y + dy[i]] != 0){
                q.push({x + dx[i], y + dy[i]});
                vst[x + dx[i]][y + dy[i]] = true;
                cnt[x + dx[i]][y + dy[i]] = cnt[x][y] + 1;
            }
        }
    }

    rep(i, 0, n){
        rep(j, 0, m){
            if (board[i][j] == 1){
                if (cnt[i][j] != 0){
                    cout<<cnt[i][j]<<" ";
                }
                else{
                    cout<<"-1 ";
                }
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
}