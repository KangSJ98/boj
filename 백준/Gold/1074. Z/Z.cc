#include <bits/stdc++.h>

using namespace std;

int zfind(int x, int y, int n){
    // cout<<"x : "<<x<<" y : "<<y<<" n : "<<n<<endl;
    if (n == 0){
        return 0;
    }
    if(x < pow(2,(n-1)) && y < pow(2,(n-1))){
        return zfind(x, y, n-1);
    }
    else if(x >= pow(2,(n-1)) && y < pow(2, (n-1))){
        return zfind(x - pow(2, (n-1)), y, n-1) + pow(4, (n-1));
    }
    else if(x < pow(2, (n-1)) && y >= pow(2, (n-1))){
        return zfind(x, y - pow(2, (n-1)), n-1) + 2 * pow(4, (n-1));
    }
    else{
        return zfind(x - pow(2, (n-1)), y - pow(2, (n-1)), n-1) + 3 * pow(4, (n-1));
    }
}

int main(void){
    int N;
    cin>>N;

    int r, c;
    cin>>r>>c;

    cout<<zfind(c, r, N);
}