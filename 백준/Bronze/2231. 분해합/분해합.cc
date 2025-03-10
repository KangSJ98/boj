#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;
    cin>>N;
    bool find_generator = false;

    for(int i=min(1, abs(N-100)); i<N; i++){
        int tmp = i;
        int sum = i;

        while (tmp != 0){
            sum += tmp%10;
            tmp /= 10;
        }

        if(sum == N){
            cout<<i;
            find_generator = true;
            break;
        }
    }
    if(!find_generator){
        cout<<0;
    }

    return 0;
}