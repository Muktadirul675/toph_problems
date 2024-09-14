#include<bits/stdc++.h>
#include<utility>
#include<iterator>
using namespace std;

int main(){
    string s; cin >> s;
    vector<pair<char,int>> doc;
    for(char ch: s){
        int count = 0;
        for(char c:s){
            if(ch == c) count++;
        }
        pair<char,int> p;
        p.first = ch;
        p.second = count;
        doc.push_back(p);
    }
    pair<char,int> highest_pair = doc[0];
    for(vector<pair<char,int>>::iterator it=doc.begin();it != doc.end();it++){
        if((*it).second > highest_pair.second) highest_pair = (*it);
        if((*it).second == highest_pair.second) {
            int a = highest_pair.first - '0';
            int b = (*it).first - '0';
            if(a > b){
                highest_pair = (*it);
            }
        }
    }
    cout << highest_pair.first;
    return 0;
}
