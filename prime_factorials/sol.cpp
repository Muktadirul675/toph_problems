#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int d = 2;
    while(d != n){
        if(n % d == 0){
            cout << d << ' ' ;
        }else{
            d++;
        }
        n/=d;
    }
    return 0;
}
