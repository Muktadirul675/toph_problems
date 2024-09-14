#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int friends = 0;
    for(int i=1;i<n;i++){
        if(n % i == 0){
            friends++;
        }
    }
    cout << friends << endl;
    return 0;
}
