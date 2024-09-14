#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s; cin >> s;
    reverse(s.begin(),s.end());
    string formatted = "";
    for(int i=0;i<s.length();i++){
        formatted += s[i];
        if((i != 0) && (i+1 != s.length())){
            if((i+1) % 3 == 0){
                formatted += ',';
            }
        }
    }

    reverse(formatted.begin(),formatted.end());

    cout << formatted << endl;

    return 0;
}

