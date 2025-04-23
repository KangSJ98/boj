#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int a, b;

int main(void){
    fastio;
    cin>>a>>b;

    cout<<a * a - b * b;
}