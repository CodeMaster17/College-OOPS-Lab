#include<iostream>
using namespace std;
class distanceCalc
{
private:
    int feet;
    float inches;

public:
    distanceCalc(int f=0, float i=0)
    {
        feet = f;
        inches = i;
    }
    distanceCalc add(distanceCalc distance1, distanceCalc distance2)
    {
        distanceCalc distance3((distance1.feet + distance2.feet), (distance1.inches + distance2.inches));
        if(distance3.inches>=12){
            distance3.feet++;
            distance3.inches-=12;
        };
        return distance3;
    }
    void displayResult()
    {
        cout << "Resultant distance of the two distances is is " << this->feet << " feet " << this->inches << " inches " << endl;
    }
};

int main()
{
    distanceCalc distance1(7, 8), distance2(4, 9);
    distanceCalc distance3;
    distance3=distance3.add(distance1, distance2);
    distance3.displayResult();
    return 0;
}