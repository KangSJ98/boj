#include <bits/stdc++.h>

using namespace std;

string file_name[50];
bool file_pattern[50];

int main(void)
{
    memset(file_pattern, true, sizeof(file_pattern));
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> file_name[i];
        if (i != 0)
        {
            for (int j = 0; j < size(file_name[i]); j++)
            {
                if (file_pattern[j] && (file_name[i][j] != file_name[i-1][j])){
                    file_pattern[j] = false;
                }
            }
        }
    }

    for(int i=0; i<size(file_name[0]); i++){
        if (file_pattern[i] == true){
            cout<<file_name[0][i];
        }
        else{
            cout<<"?";
        }
    }
}