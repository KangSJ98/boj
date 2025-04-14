#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

bool arr[31];

int main(void){
    fastio;
    rep(i, 0, 28){
        int tmp;
        cin>>tmp;
        arr[tmp] = true;
    }
    rep(i, 1, 31){
        if(!arr[i]){
            cout<<i<<endl;
        }
    }
}