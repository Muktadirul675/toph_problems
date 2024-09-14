#include <iostream>
#include<string>

using namespace std;

int shift_to_left(int num, int shift){
    int shifted = num - shift;
    if(shifted < 97){
        int diff = 97 - shifted;
        shifted = 123 - diff;
    }
    char c = shifted;
    return shifted;
}

int main()
{
    int left_shift;
    cin >> left_shift;
    string s;
    getline(cin,s);
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i] != ' '){
            int i_int = s[i];
            char c = shift_to_left(i_int, left_shift);
            s[i] = c;
        }
    }
    cout << s << endl;
    return 0;
}
