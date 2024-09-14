#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int sum = 0;
    for(int i=a;i<=b;i++) sum += arr[i];
    cout << sum << endl;
    return 0;
}
