#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int first_char = s[0];
    if(!(first_char < 97)) s[0] = first_char - 32;
    s += '.';
    for(int i=0;i<s.length();i++){
        if(s[i] == 's') s[i] = '$';
        else if(s[i] == 'i') s[i] = '!';
        else if(s[i] == 'o'){
            s[i] = '(';
            s.insert(i+1,")");
        }
    }
    cout << s << endl;
    return 0;
}
