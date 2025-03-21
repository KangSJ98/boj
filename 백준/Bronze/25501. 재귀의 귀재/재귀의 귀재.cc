#include <bits/stdc++.h>
using namespace std;

int cnt;

int recursion(const string &s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    if (s[l] != s[r]) return 0;
    return recursion(s, l + 1, r - 1);
}

int isPalindrome(const string &s) {
    return recursion(s, 0, s.size() - 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
        cnt = 0;
        int result = isPalindrome(S);
        cout << result << " " << cnt << "\n";
    }
}
