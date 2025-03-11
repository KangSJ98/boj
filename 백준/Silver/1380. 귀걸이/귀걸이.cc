#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int scenario = 0;
    while (true)
    {
        scenario++;
        int N;
        vector<string> names;
        int apsu[101] = {0};

        cin >> N;
        cin.ignore();
        if (N == 0)
            break;

        for (int i = 0; i < N; i++)
        {
            string tmp;
            getline(cin, tmp);
            names.push_back(tmp);
        }
        for (int i = 0; i < 2 * N - 1; i++)
        {
            int girl_num;
            char ab;
            cin >> girl_num >> ab;
            apsu[--girl_num]++;
        }

        for (int i = 0; i < N; i++)
        {
            if (apsu[i] == 1)
            {
                cout << scenario << " " << names[i]<<endl;
            }
        }
    }
}