#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int progress = n / 10;
    string bar = "[";
    for(int i=0;i<10;i++) {
        if(i<progress) bar += "+";
        else bar+=".";
    }

    bar += "]";

    cout << bar << " " << n << "%";

    return 0;
}

