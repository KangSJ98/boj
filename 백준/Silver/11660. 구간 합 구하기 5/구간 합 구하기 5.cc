#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int n,m;
int x_1,x_2,y_1,y_2;
int board_sum[1025][1025];

int main(void){
    fastio;

    cin>>n>>m;
    rep(i, 1, n+1){
        rep(j, 1, n+1){
            int tmp;
            cin>>tmp;

            if (i==1 && j == 1){
                board_sum[i][j] = tmp;
            }
            else if(j == 1){
                board_sum[i][j] = board_sum[i-1][j] + tmp;
            }
            else{
                board_sum[i][j] = board_sum[i][j-1] + board_sum[i-1][j] - board_sum[i-1][j-1] + tmp;
            }
        }
    }
    rep(i, 0, m){
        cin>>x_1>>y_1>>x_2>>y_2;
        cout<<board_sum[x_2][y_2] - board_sum[x_1-1][y_2] - board_sum[x_2][y_1-1] + board_sum[x_1-1][y_1-1]<<"\n";
    }

}