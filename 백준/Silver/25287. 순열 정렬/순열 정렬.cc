#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int t, n;
int arr[50002];

int main(void){
    fastio;

    cin>>t;

    while (t--){
        bool test = true;
        cin>>n;
        memset(arr, 0, sizeof(arr));

        rep(i, 1, n + 1){
            int big, small;
            cin>>big;
            if (n - big + 1 > big){
                small = big;
                big = n - big + 1;
            }
            else{
                small = n - big + 1;
            }
            if (small < arr[i - 1]){
                if(big < arr[i - 1]){
                    test = false;
                }
                else{
                    arr[i] = big;
                }
            }
            else{
                arr[i] = small;
            }
        }
        if (test){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}