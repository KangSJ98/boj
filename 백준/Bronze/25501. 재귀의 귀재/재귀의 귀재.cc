#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)

using namespace std;

int t;
int hochul;
bool isPal;

int main(){
    cin>>t;
    while(t--){
        string tmp;
        cin>>tmp;
        hochul = 1;
        isPal = true;

        rep(i, 0, size(tmp) / 2){
            if (tmp[i] == tmp[size(tmp) - 1 - i]){
                hochul++;
            }
            else{
                isPal = false;
                break;
            }
        }

        if(isPal){
            cout<<1<<" "<<hochul<<endl;
        }
        else{
            cout<<0<<" "<<hochul<<endl;
        }

    }
}