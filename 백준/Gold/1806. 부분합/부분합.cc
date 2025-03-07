#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, S;
    cin>>N>>S;

    vector<int> arr(N);
    
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    int min_length = N + 1;
    int start = 0, end = 0, sum = 0;

    while(true){
        if (sum >= S){
            min_length = min(min_length, end - start);
            sum -= arr[start++];
        }
        else if(end == N){
            break;
        }
        else{
            sum += arr[end++];
        }
    }

    if (min_length == N + 1){
        cout<<0;
    }
    else{
        cout<<min_length;
    }

    return 0;
}