#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

long long int fact = 1;
long long int n,m;

int main(void){
    fastio;

    cin>>n>>m;

    if (n > m){
        cout<<0;
    }
    else{
        for(long long int i = 1; i <= n; i++){
            fact = (fact * i) % m;
        }
        cout<<fact;
    }
}