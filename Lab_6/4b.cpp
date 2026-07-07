#include <iostream>
#include <math.h>
using namespace std;
class rectangular;//destination class
class polar{//source class
    private:
        float r, theta;
    public:
        polar(float R, float THETA):r(R), theta(THETA){}
        float r_getter(){return r;}
        float theta_getter(){return theta;}
};
class rectangular{//destination
    private:
        float x, y;
    public:
    rectangular():x(0), y(0){}

    rectangular(polar POLAR)
    {
         x = POLAR.r_getter() * cos(POLAR.theta_getter());
         y = POLAR.r_getter() * sin(POLAR.theta_getter());
    }
    float x_getter(){return x;}
    float y_getter(){return y;}
};
int main()
{
    float temp_r, temp_theta;
    cout<<"Enter the value of r and theta: ";
    cin>>temp_r>>temp_theta;
    polar P(temp_r, temp_theta);
    rectangular R;
    R = P;
    cout<<"The value of given coordinates in rectangular coordinates system is: "<<endl<<"x = "<<R.x_getter()<<" y = "<<R.y_getter();
    return 0;
}   