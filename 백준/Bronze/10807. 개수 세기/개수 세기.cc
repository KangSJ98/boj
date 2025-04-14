#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int n, arr[202], v;

int main(void){
    fastio;
    cin>>n;
    while (n--){
        int tmp;
        cin>>tmp;
        arr[tmp+100]++;
    }
    cin>>v;
    cout<<arr[v+100];
}