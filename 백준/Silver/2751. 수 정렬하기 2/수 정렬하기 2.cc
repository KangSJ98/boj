#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, num;
    cin>>N;

    vector<int> V;

    for(int i=0; i<N; i++){
        cin>>num;
        V.push_back(num);
    }

    sort(V.begin(), V.end());

    for(int i=0; i<N; i++){
        cout<<V[i]<<"\n";
    }

    return 0;
}

