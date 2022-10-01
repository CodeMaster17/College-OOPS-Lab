#include <iostream>
#include <cmath>
using namespace std;

class distanceCalc
{
public:
    int x=3;
    int y=4;
};
int main(){
        distanceCalc distanceObj;
        int x = distanceObj.x;
        int y = distanceObj.y;
    int squareSum = pow(x,2) +  pow(y,2);
    float distance = sqrt(squareSum);
    cout<<"The distane between the two pints is :"<<distance;

}