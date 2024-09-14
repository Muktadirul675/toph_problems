#include <iostream>
#include<vector>

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];
    vector<int> ca(n,1);

    for(int i=n-2;i>=0;--i){
        int diff = arr[i+1] - arr[i];
        //cout << diff;
        if(diff >= 2){
            ca[i] = ca[i+1] + 1;
        }
    }

    for(auto i: ca){
        if(i >= 2) cout << i;
        else cout << 0;
        cout << endl;
    }

    return 0;
}
