#include<iostream>

using namespace std;

void swap(int * a, int * b){
    int store = *a;
    *a = *b;
    *b = store;
}

int main(){
    int m,n; cin >> m >> n;
    int grid[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> grid[i][j];
        }
    }
    int q; cin >> q;
    for(int i=0;i<q;i++){
        int r,c; cin >> r >> c;
        int left = grid[r][c-1];
        int right = grid[r][c+1],
        top = grid[r-1][c],
        bottom = grid[r+1][c],
        top_left = grid[r-1][c-1],
        top_right = grid[r-1][c+1],
        bottom_left = grid[r+1][c-1],
        bottom_right = grid[r+1][c+1];
        grid[r][c-1] = bottom_left;
        grid[r][c+1] = top_right;
        grid[r-1][c] = top_left;
        grid[r+1][c] = bottom_right;
        grid[r-1][c-1] = left;
        grid[r-1][c+1] = top;
        grid[r+1][c-1] = bottom;
        grid[r+1][c+1] = right;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
