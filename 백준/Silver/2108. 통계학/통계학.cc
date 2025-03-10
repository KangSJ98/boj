#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;
    cin>>N;
    vector<int> number;
    int round_max = INT_MIN;
    int round_min = INT_MAX;
    double sum = 0;
    double average;

    for(int i=0; i<N; i++){
        int tmp;
        cin>>tmp;
        sum += tmp;

        number.push_back(tmp);

        if(tmp < round_min){
            round_min = tmp;
        }
        if(round_max < tmp){
            round_max = tmp;
        }
    }
    
    sort(number.begin(), number.end());
    
    average = round(sum / N);
    if(average == 0){
        cout<<0<<endl;
    }
    else{
        cout<<average<<endl;
    }
    cout<<number[(N-1) / 2]<<endl;

    int start = 0;
    int end = 0;
    int max = 1;
    vector<int> max_number;
    int tmp = number[0];

    for(int i=0; i<N; i++){
        if(number[i] == tmp){
            end = i;
            if((end - start + 1) == max){
                max_number.push_back(number[i]);
            }
            else if(max < (end - start + 1)){
                max = end - start + 1;
                max_number.clear();
                max_number.push_back(tmp);
            }
        }
        else{
            start = i;
            end = i;
            tmp = number[i];
            if((end - start + 1) == max){
                max_number.push_back(number[i]);
            }
        }
    }

    if(max_number.size() == 1){
        cout<<max_number[0]<<endl;
    }
    else{
        cout<<max_number[1]<<endl;
    }


    cout<<round_max - round_min<<endl;

}