#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int t, k, n;

int people(int x, int y){
    if (x == 1){
        return 1;
    }
    if (y == 0){
        return  x;
    }
    return people(x-1, y) + people(x, y-1);
}

int main(void){
    fastio;

    cin>>t;
    while (t){
        t--;
        cin>>k>>n;

        cout<<people(n,k)<<endl;
    }
}