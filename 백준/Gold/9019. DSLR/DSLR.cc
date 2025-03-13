#include <bits/stdc++.h>

using namespace std;

bool vst[10001];

int main(void)
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int start, end;
        cin >> start >> end;
        queue<pair<int, string>> q;

        q.push({start, ""});
        vst[start] = true;

        while(!q.empty())
        {
            int now = q.front().first;
            string path = q.front().second;
            q.pop();

            if (now == end)
            {
                cout << path << endl;
                break;
            }

            int D, S, L, R;

            D = (now * 2) % 10000;
            if (!vst[D])
            {
                vst[D] = true;
                q.push({D, path + "D"});
            }

            S = (now + 9999) % 10000;
            if (!vst[S])
            {
                vst[S] = true;
                q.push({S, path + "S"});
            }

            L = (now * 10 + (now / 1000)) % 10000;
            if (!vst[L])
            {
                vst[L] = true;
                q.push({L, path + "L"});
            }

            R = now / 10 + (now % 10) * 1000;
            if (!vst[R])
            {
                vst[R] = true;
                q.push({R, path + "R"});
            }
        }
        memset(vst, false, sizeof(vst));
    }

    return 0;
}