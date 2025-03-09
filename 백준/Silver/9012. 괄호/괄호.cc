#include <bits/stdc++.h>

using namespace std;

int main(void){
    int T;
    cin>>T;

    for(int i=0; i<T; i++){
        string pstring;
        cin>>pstring;

        int count = 0;

        for(int j=0; j<pstring.size(); j++){
            if(pstring[j] == '('){
                count++;
            }
            else{
                if(count == 0){
                    count = 1;
                    break;
                }
                count--;
            }
        }

        if(count == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}