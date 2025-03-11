#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> stick;

    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        stick.push_back(tmp);
    }

    int cnt = 0, now = 0;

    for (int i = N-1; i >= 0; i--)
    {
        if (now < stick[i])
        {
            cnt++;
            now = stick[i];
        }
    }
    cout << cnt;
}