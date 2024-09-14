#include<iostream>

using namespace std;

int main(){
    int n, cpul, meml;
    cin >> n >> cpul >> meml;
    string verdict = "AC";
    for(int i=0;i<n;i++){
        int di, cpui, memi; cin >> di >> cpui >> memi;
        if(cpui > cpul){
            verdict = "CLE"; break;
        }
        if(memi > meml){
            verdict = "MLE"; break;
        }
        if(di != 0){
            verdict = "WA";; break;
        }
    }
    cout << verdict;
    return 0;
}
