#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define endl "\n"

using namespace std;

int board[129][129];
int cnt_white, cnt_blue;
int n;

void paper(int x, int y, int length)
{
    int sum = 0;
    rep(i, y, y + length)
    {
        rep(j, x, x + length)
        {
            sum = sum + board[i][j];
        }
    }

    if ((sum == 0))
    {
        cnt_white++;
    }
    else if (sum == length * length)
    {
        cnt_blue++;
    }
    else
    {
        paper(x, y, length / 2);
        paper(x + length / 2, y, length / 2);
        paper(x, y + length / 2, length / 2);
        paper(x + length / 2, y + length / 2, length / 2);
    }
}

int main(void)
{
    fastio;
    cin>>n;

    rep(i, 0, n){
        rep(j, 0, n){
            cin>>board[i][j];
        }
    }

    paper(0, 0, n);
    
    cout<<cnt_white<<"\n"<<cnt_blue;
}