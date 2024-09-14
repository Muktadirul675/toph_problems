#include <iostream>
#include<bitset>

using namespace std;

int main()
{
    int a; cin >> a;
    bitset<100000> b(a);
    int i=0;
    while(++i){
        bitset<100000> c(i);
        if(b.count() == c.count()) break;
    }
    cout << i;
    return 0;
}
