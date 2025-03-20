#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)

using namespace std;

int n;

int q1, q2, q3, q4, axis;

int main(void){
    cin>>n;
    while(n--){
        int x, y;
        cin>>x>>y;
        if (x == 0 || y == 0) axis++;
        if (0 < x && 0 < y) q1++;
        if (x < 0 && 0 < y) q2++;
        if (x < 0 && y < 0) q3++;
        if (0 < x && y < 0) q4++;
    }
    cout<<"Q1: "<<q1<<endl;
    cout<<"Q2: "<<q2<<endl;
    cout<<"Q3: "<<q3<<endl;
    cout<<"Q4: "<<q4<<endl;
    cout<<"AXIS: "<<axis<<endl;
}