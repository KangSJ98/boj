#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;

    cin>>N;

    stack<int> s;

    for(int i=0; i<N; i++){
        string command;
        cin>>command;

        if(command == "push"){
            int tmp;
            cin>>tmp;

            s.push(tmp);
        }
        else if(command == "pop"){
            if(s.size() == 0){
                cout<<-1<<endl;
            }
            else{
                cout<<s.top()<<endl;
                s.pop();
            }
        }
        else if(command == "size"){
            cout<<s.size()<<endl;
        }
        else if(command == "empty"){
            if(s.size() == 0){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            if(s.size() == 0){
                cout<<-1<<endl;
            }
            else{
                cout<<s.top()<<endl;
            }
        }
    }
}