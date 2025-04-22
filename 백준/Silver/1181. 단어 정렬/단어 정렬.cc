#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int n;
vector<string> words;

bool cmp(string a, string b){
    if (a.length() == b.length()){
        return a < b;
    }
    return a.length() < b.length();
}

int main(void){
    fastio;

    cin>>n;
    rep(i, 0, n){
        string tmp;
        cin>>tmp;
        words.push_back(tmp);
    }

    sort(words.begin(), words.end(), cmp);

    words.erase(unique(words.begin(), words.end()), words.end());

    for (const string&s : words){
        cout<<s<<"\n";
    }
}