#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int a, b, pownum[501];
int start = 1, last = 2;
int cnt;
int n;

int main(void){
    rep(i, 1, 500){
        pownum[i] = i * i;
    }

    cin>>n;

    while(start != 500){
        int tmp = pownum[last] - pownum[start];

        if (tmp < n){
            last++;
        }
        else if (tmp > n)
        {
            start++;
        }
        else if (tmp == n)
        {
            cnt++;
            last++;
        }
    }
    cout<<cnt;
}