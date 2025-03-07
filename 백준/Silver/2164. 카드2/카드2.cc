#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N = 0;
    cin>>N;

    queue<int> cards;

    for(int i = 1; i < N + 1; i++){
        cards.push(i);
    }

    bool count = true;
    while (cards.size() != 1){
        int front = cards.front();
        
        cards.pop();

        if(count){
            count = false;
        }
        else{
            cards.push(front);
            count = true;
        }
    }

    cout<<cards.front();
}
