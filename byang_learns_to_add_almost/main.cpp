#include <iostream>

using namespace std;

void makeEqualLength(string * a, string * b){
    if((*a).length() == (*b).length()) return;
    else if((*a).length() < (*b).length()){
        int required = (*b).length() - (*a).length() ;
        string s = "";
        for(int i=0;i<required;i++) s += "0";
        s += (*a);
        *a = s;
    }
    else if((*a).length() > (*b).length()){
        int required = (*a).length() - (*b).length() ;
        string s = "";
        for(int i=0;i<required;i++) s += "0";
        s += (*b);
        *b = s;
    }
}

int main()
{
    string a,b; cin >> a >> b;
    makeEqualLength(&a,&b);
    bool confusing = false;
    for(int i=a.length()-1;i >= 0;i--){
        int a_int = a[i] - '0';
        int b_int = b[i] - '0';
        if((a_int+b_int) > 9){
            confusing = true;
            break;
        }
    }
    if(confusing) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
