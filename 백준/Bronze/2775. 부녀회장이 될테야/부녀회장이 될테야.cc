#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int t, k, n;

int people[15];

int main(void){
    fastio;

    cin>>t;
    while (t){
        t--;
        cin>>k>>n;

        rep(i, 1, n+1){
            people[i] = i;
        }
        rep(i, 0, k){
            rep(j, 1, n+1){
                people[j] = people[j] + people[j-1];
            }
        }
        cout<<people[n]<<"\n";
    }
}