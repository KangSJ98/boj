#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)

using namespace std;

int n, m;
int nemo_garo[101];
int nemo_saero[101];
int sum;
bool up, left, right, down;
int garo[3], saero[3];

int main(void){
    cin>>n>>m;
    rep(i, 0, n){
        rep(j, 0, m){
            char tmp;
            cin>>tmp;
            if (tmp == '#'){
                nemo_garo[i]++;
                nemo_saero[j]++;
                sum++;
            }
        }
    }
    int nemo = (sum + 1) / 4 + 1;

    rep(i, 0, n){
        if (nemo_garo[i] == nemo){
            garo[0] = i;
            garo[2]++;
        }
        if (nemo_garo[i] == nemo-1){
            garo[1] = i;
        }
    }
    rep(i, 0, m){
        if (nemo_saero[i] == nemo){
            saero[0] = i;
            saero[2]++;
        }
        if (nemo_saero[i] == nemo-1){
            saero[1] = i;
        }
    }
    if (garo[0] < garo[1] && garo[2] == 1){
        cout<<"DOWN";
    }
    else if (garo[0] > garo[1]&& garo[2] == 1)
    {
        cout<<"UP";
    }
    else if (saero[0] < saero[1] && saero[2] == 1){
        cout<<"RIGHT";
    }
    else{
        cout<<"LEFT";
    }  

    return 0;
}