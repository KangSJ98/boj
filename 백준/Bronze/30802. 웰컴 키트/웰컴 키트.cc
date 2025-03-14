#include <bits/stdc++.h>

using namespace std;

int n;
int people[6];
int t, p;

int peoples;
int t_shirt, pen;

int main(void){
    cin>>n;
    for(int i=0; i<6; i++){
        cin>>people[i];
    }
    cin>>t>>p;

    for(int i=0; i<6; i++){
        t_shirt += (people[i] + t - 1) / t;
    }
    cout<<t_shirt<<endl;
    cout<<n/p<<" "<<n%p;

    return 0;
}