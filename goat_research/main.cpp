#include <iostream>

using namespace std;

int main()
{
    int n,largest = 0; cin >> n;
    string baas[n];
    for(int i=0;i<n;i++){
        string s; cin >> s;
        int a = 0;
        for(auto ch: s) if(ch=='a') a++;
        if(a == 1) s+= 'a';
        else if(a%2) s = s.substr(0,s.length()-1);
        baas[i] = s;
        if(s.length() > largest) largest = s.length();
    }

    int middle = (largest + 1)/2;
    //cout << middle;

    for(string s: baas){
        int s_middle = (s.length() + 1)/2;
        int need_to_add = middle - s_middle;
        //cout << need_to_add;
        string add = "";
        for(int i=0;i<need_to_add;i++) add += ' ';
        add += s;
        cout << add << endl;
    }

    return 0;
}
