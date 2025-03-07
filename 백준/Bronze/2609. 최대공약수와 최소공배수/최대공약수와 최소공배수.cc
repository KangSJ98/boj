#include <bits/stdc++.h>

using namespace std;

int calc_gcd(int a, int b){
    if(a < b){
        return calc_gcd(a, b - a);
    }
    else if(b < a){
        return calc_gcd(a - b, b);
    }
    else{
        return a;
    }
}

int main(void){

    int n, m;
    cin>>n>>m;

    int gcd = calc_gcd(n, m);

    int lcm = n * m / gcd;

    cout<<gcd<<endl;
    cout<<lcm<<endl;

    return 0;
}