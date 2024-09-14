#include<iostream>
using namespace std;

int main(){
    int x,y; cin >> x >> y;
    int extra;
    if(y<x) extra = x - y;
    else if(y % x == 0){
        extra = y / x;
    }else{
        int d = y / x;
        d++;
        extra = d*x - y;
    }
    cout << extra;
    return 0;
}
