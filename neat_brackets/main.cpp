#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int valid = true;
    for(int i=0;i<s.length();i++){
        if(s[i] == '('){
            for(int j=i;j<s.length();j++){
                if(s[j] == ')'){
                    s[i] = '.';
                    s[j] = '.';
                    break;
                }
            }
        }
    }
    for(char ch: s){
        if(ch == '(' || ch == ')') valid = false;
    }
    if(valid) cout << "Yes";
    else cout << "No";
    return 0;
}
