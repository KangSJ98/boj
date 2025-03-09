#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}
int main(void){
    int N;
    cin>>N;

    vector<pair<int, string>> member;
    pair<int, string> tmp;

    for(int i=0; i<N; i++){
        cin>>tmp.first>>tmp.second;
        member.push_back(tmp);
    }

    stable_sort(member.begin(), member.end(), compare);
    for(int i=0; i<N; i++){
        cout<<member[i].first<<" "<<member[i].second<<endl;
    }
}