#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int main(void){
    fastio;
    while (true){
        string tmp;
        getline(cin, tmp);
        if (tmp == "***") break;

        for(int i=tmp.length() -1; i>=0; i--){
            cout<<tmp[i];
        }
        cout<<"\n";
    }
}