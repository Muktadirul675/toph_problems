#include <iostream>

using namespace std;

int main()
{
    int r,c; cin >> r >> c;
    char arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> arr[i][j];
        }
    }
    int freeSpots = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j] != '*'){
                int up = i - 1;
                int down = i + 1;
                int left = j - 1;
                int right = j + 1;
                int free = 0;
                if(up == -1) free++;
                else if(arr[up][j] == '.'){
                    free++;
                }
                if(down == r) free++;
                else if(arr[down][j] == '.') free++;
                if(left == -1) free++;
                else if(arr[i][left] == '.') free++;
                if(right == c) free++;
                else if(arr[i][right] == '.') free++;
                if(free == 4){
                    freeSpots++;
                }
            }
        }
    }

    cout << freeSpots << endl;

    return 0;
}
