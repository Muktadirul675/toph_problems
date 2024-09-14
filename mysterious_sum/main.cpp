#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    int c = 1;
    while(t--){
        int a,b; cin >> a >> b;
        cout << "Case " << c++ << ": " << a+b << a-b << endl;
    }
    return 0;
}
