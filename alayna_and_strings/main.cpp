#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int sml = 0, cap = 0;
    for(auto ch: s){
        if(ch >= 'a' && ch<='z') sml++;
        else if(ch>='A' && ch <= 'Z') cap++;
    }
    cout << cap << ' ' << sml << endl;
    return 0;
}
