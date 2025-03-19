#include <bits/stdc++.h>

using namespace std;

int ranking[10001];

int n, m;

int high, second_high;

int main(void)
{

    while (true)
    {
        memset(ranking, 0, sizeof(ranking));
        high = 0;
        second_high = 0;
        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int tmp;
                cin >> tmp;

                ranking[tmp]++;
            }
        }

        for (int i = 0; i < 10001; i++)
        {
            if (high < ranking[i])
            {
                second_high = high;
                high = ranking[i];
            }
            else if(second_high < ranking[i] && ranking[i] < high){
                second_high = ranking[i];
            }
        }
        for (int i = 0; i < 10001; i++)
        {
            if (ranking[i] == second_high)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}