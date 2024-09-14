#include<iostream>

using namespace std;

bool pair_is_ok(char a, char b){
    if(a == '.' || b =='.') return true;
    return false;
}

bool need_to_vanish(char arr[][2], int size){
    for(int i=0;i<size;i++){
        if(!(pair_is_ok(arr[i][0],arr[i][1]))) return true;
    }
    return false;
}

void make_dots(char arr[][2],int size, char c){
    for(int i=0;i<size;i++){
        if(arr[i][0] == c) arr[i][0] = '.';
        if(arr[i][1] == c) arr[i][1] = '.';
    }
}



int main(){
    int n,m; cin >> n >> m;
    char arr[m][2];
    char copy[m][2];
    for(int i=0;i<m;i++){
        cin >> arr[i][0] >> arr[i][1];
        copy[i][0] = arr[i][0]; copy[i][1] = arr[i][1];
    }
    int least_vanish_count = m*2;
   for(int i=1;i<=m*2;i++){
    char c = arr[i/2][i%2];
    int vanish_count = 0;
    while(need_to_vanish(copy,m)){
        vanish_count++;
        make_dots(copy,m,c);
        for(int i=1;i<=m*2;i++){
            char ch = arr[i/2][i%2];
            if(ch != '.') c = ch;
            break;
        }
    }
    if(vanish_count < least_vanish_count && vanish_count!=0) least_vanish_count = vanish_count;
   }
    cout << n - least_vanish_count;
    return 0;
}
