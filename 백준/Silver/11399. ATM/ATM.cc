#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int n;
int t[1001];
int time_sum;

int main(void){
    fastio;

    cin>>n;
    rep(i, 0, n){
        cin>>t[i];
    }

    sort(t, t + n);

    rep(i, 0, n){
        time_sum += t[i] * (n-i);
    }

    cout<<time_sum;
}