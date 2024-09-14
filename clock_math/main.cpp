#include <bits/stdc++.h>
using namespace std;

double displacement(int m){
    double hourDisplacementPerMinute = (1.0/2.0);
    double dp = hourDisplacementPerMinute * m;
    return dp;
}

int main()
{
    int h,m; cin >> h >> m;
    int hourToMinuteNumber = h * 5;
    int clockWiseSteps = 0;
    int counterClockWiseSteps = 0;
    for(int i=hourToMinuteNumber;i != m; i++){
        clockWiseSteps++;
        if(i == 59) i = -1;
    }
    for(int i=hourToMinuteNumber;i!=m;i--){
        counterClockWiseSteps++;
        if(i == -1) i = 59;
    }
    int direction = (clockWiseSteps <counterClockWiseSteps) ? 1 : -1;
    double rootAngle = (clockWiseSteps < counterClockWiseSteps) ? (clockWiseSteps * 6) : (counterClockWiseSteps * 6);
    double angle = (direction == 1) ? (rootAngle - displacement(m)) : (rootAngle + displacement(m));
    cout << angle << endl;
    return 0;
}
