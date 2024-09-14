#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n; cin >> n;
    int notes[6] = {500,100,50,10,5,1};
    vector<int> need;
    for(int i=0;i<6;i++){
        if(notes[i] <= n){
            int req = n / notes[i];
            for(int j=0;j<req;j++) need.push_back(notes[i]);
            if(n % notes[i] == 0) break;
            else{
                n -= req * notes[i];
            }
        }
    }
    for(int i=need.size()-1;i>=0;i--){
        cout << need[i] << ' ';
    }
    return 0;
}
