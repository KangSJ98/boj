#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int n,m;
int mat[101][101];

int main(void){
    fastio;
    cin>>n>>m;
    rep(i, 0, n){
        rep(j, 0, m){
            cin>>mat[i][j];
        }
    }
    rep(i, 0, n){
        rep(j, 0, m){
            int tmp;
            cin>>tmp;
            cout<<mat[i][j] + tmp<<" ";
        }
        cout<<endl;
    }
}