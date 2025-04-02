#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int n;
int fibonacci[1001];

int main(void){
    fastio;
    cin>>n;
    fibonacci[1] = 1;
    fibonacci[2] = 3;
    rep(i, 3, n+1){
        fibonacci[i] = (fibonacci[i-1] + 2 * fibonacci[i-2]) % 10007;
    }
    cout<<fibonacci[n];
}