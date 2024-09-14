#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;
    bool leap = false;
    if (y % 4 == 0 && y % 100 != 0)
    {
        leap = true;
    }
    else if (y % 100 == 0 && y % 400 == 0)
    {
        leap = true;
    }
    if (leap)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}