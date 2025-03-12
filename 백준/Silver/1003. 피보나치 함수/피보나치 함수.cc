#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;

    vector<int> fibo_vec;
    fibo_vec.push_back(1);
    fibo_vec.push_back(1);
    for (int i=2; i<41; i++){
        fibo_vec.push_back(fibo_vec[i-1] + fibo_vec[i-2]);
    }

    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        if (n == 1){
            cout<<"0 1"<<endl;
        }
        else if(n == 0){
            cout<<"1 0"<<endl;
        }
        else{
            cout<<fibo_vec[n-2]<<" "<<fibo_vec[n-1]<<endl;
        }
    }
}