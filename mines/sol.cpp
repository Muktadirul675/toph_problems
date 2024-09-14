#include<iostream>

using namespace std;

int main(){
    int r,c; cin >> r >> c;
    char grid[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> grid[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int cell = grid[i][j];
            if(cell == '*') continue;
            int up, down, left, right, mines;
            up = i-1;
            down = i+1;
            left = j-1;
            right = j+1;
            mines = 0;
            if(up != -1){
                if(grid[up][j] == '*') mines++;
                if(left != -1){
                    if(grid[up][left] == '*') mines++;
                }
                if(right != c){
                    if(grid[up][right] == '*') mines++;
                }
            }
            if(down != r){
                if(grid[down][j] == '*') mines++;
                if(left != -1){
                    if(grid[down][left] == '*') mines++;
                }
                if(right != c){
                    if(grid[down][right] == '*') mines++;
                }
            }
            if(left != -1){
                if(grid[i][left] == '*') mines++;
            }
            if(right != c){
                if(grid[i][right] == '*') mines++;
            }
            if(mines){
                // char m = static_cast<char>(mines);
                // cout << m;
                grid[i][j] = mines + '0';
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}
