#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool exists(vector<int> set, int num){
    for(int i=0;i<set.size();i++){
        if(set.at(i) == num) return true;
    }
    return false;
}

int main(){
    int n,m; cin >> n >> m;
    int set_n[n], set_m[m];
    vector<int> set;
    for(int i=0;i<n;i++) {
        cin >> set_n[i];
        if(!(exists(set,set_n[i]))) set.push_back(set_n[i]);
    }
    for(int i=0;i<m;i++) {
        cin >> set_m[i];
        if(!(exists(set,set_m[i]))) set.push_back(set_m[i]);
    }
    sort(set.begin(),set.end());
    for(int i=0;i<set.size();i++){
        cout << set[i];
        if(!(i+1 == set.size())) cout << " ";
    }
    return 0;
}
