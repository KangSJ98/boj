#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define endl "\n"

using namespace std;

string board;
bool pos = true;

int main(void)
{
    fastio;
    cin >> board;
    rep(i, 0, board.length())
    {
        int cnt = 0;
        int j = i;
        while (true)
        {
            if (board[j] == 'X')
            {
                j++;
                cnt++;
            }
            else{
                break;
            }
        }
        if (cnt >= 4){
            board[i] = 'A';
            board[i+1] = 'A';
            board[i+2] = 'A';
            board[i+3] = 'A';
        }
        else if(cnt >= 2){
            board[i] = 'B';
            board[i+1] = 'B';
        }
        else if(cnt == 1){
            pos = false;
            break;
        }
    }
    if (pos){
        cout<<board;
    }
    else{
        cout<<"-1";
    }
}