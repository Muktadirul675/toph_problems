#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    bool ascending = true;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i != 0){
            if(arr[i] < arr[i-1]){
                ascending = false;
                break;
            }
        }
    }
    if(ascending) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
