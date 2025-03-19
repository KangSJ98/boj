#include <bits/stdc++.h>

using namespace std;

vector<string> first_image;
vector<string> second_image;

int n, m;

bool eyfa;

int main(void)
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;

        first_image.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;

        second_image.push_back(tmp);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(first_image[i][j] != second_image[i][2 * j] || first_image[i][j] != second_image[i][2 * j + 1]){
                eyfa = true;
            }
        }
    }

    if (eyfa){
        cout<<"Not Eyfa";
    }
    else{
        cout<<"Eyfa";
    }

    return 0;
}