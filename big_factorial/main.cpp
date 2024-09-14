#include <bits/stdc++.h>

using namespace std;

long int factorial(int num){
    long int result = 1;
    for(int i=2;i<=num;i++){
        result *= i;
    }
    return result;
}

int main()
{
    int n; cin >> n;
    if(n>=20){
        cout << "0000" << endl;
    }
    else{
        string s = to_string(factorial(n));
        if(s.length() <= 4) cout << s;
        else{
            string sub = s.substr(s.length()-4,4);
            cout << sub << endl;
        }
    }
    return 0;
}
