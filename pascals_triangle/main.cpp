#include <iostream>
#include<cmath>
using namespace std;

// long int factorial(int num){
//     if(num == 0 || num == 1) return 1;
//     return num * factorial(num - 1);
// }

// long int ncr(int n,int r){
//     long int up = factorial(n);
//     long int n_minus_r = factorial(n-r);
//     long int down = n_minus_r * factorial(r);
//     return up/down;
// }

int main()
{
    int n; cin >> n;
    long int result = pow(2,n-1);
    cout << result;
    return 0;
}
