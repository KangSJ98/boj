#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int number[10001];
int n;


int main(void){
    fastio;
    cin>>n;

    rep(i, 0, n){
        int tmp;
        cin>>tmp;
        number[tmp]++;
    }

    rep(i, 0, 10001){
        rep(j, 0, number[i]){
            cout<<i<<"\n";
        }
    }
}