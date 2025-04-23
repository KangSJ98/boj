#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"

using namespace std;

int total_score;
pair<int, int> score[8];

bool cmp(pair<int, int> a,pair<int, int> b){
    return a.second > b.second;
}
bool cmp2(pair<int, int> a,pair<int, int> b){
    return a.first < b.first;
}



int main(void){
    fastio;

    rep(i, 0, 8){
        int tmp;
        cin>>tmp;
        score[i] = {i + 1, tmp};
    }

    sort(score, score + 8, cmp);

    rep(i, 0, 5){
        total_score += score[i].second;
    }
    cout<<total_score<<"\n";
    
    sort(score, score + 5, cmp2);

    rep(i, 0, 5){
        cout<<score[i].first<<" ";
    }
}