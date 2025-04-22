#include<vector>
long long sum(std::vector<int> &a) {
    long long tmp = 0;
    for (int i = 0; i < a.size(); i++) {
        tmp = tmp + a[i];
    }
    return tmp;
}