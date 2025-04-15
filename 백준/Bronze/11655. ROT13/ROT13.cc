#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

string word;

int main(void){
    fastio;

    getline(cin, word);

    rep(i, 0, word.length()){
        if ('a' <= word[i] && word[i] <= 'z'){
            word[i] = (word[i] + 13 - 'a') % 26 + 'a';
        }
        if ('A' <= word[i] && word[i] <= 'Z'){
            word[i] = (word[i] + 13 - 'A') % 26 + 'A';
        }
    }
    cout<<word;
}