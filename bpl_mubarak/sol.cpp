#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int balls = 0;
        for (char ch : s)
        {
            if (!(ch == 'W' || ch == 'N' || ch == 'D'))
                balls++;
        }
        int overs = balls / 6;
        balls %= 6;
        if (overs)
        {
            string o;
            if(overs == 1) o="OVER";
            else o="OVERS";
            cout << overs << " " << o;
            if (balls)
                cout << " ";
        }
        if (balls)
        {
            string b;
            if(balls == 1) b="BALL";
            else b="BALLS";
            cout << balls << " " << b;
        }
        cout << endl;
    }
    return 0;
}
