#include <iostream>
#include <math.h>
using namespace std;
class calculate_distance{
    private:
        float x1, y1, x2, y2, dist;
    public:
        calculate_distance(float x_a,float y_a,float x_b, float y_b):x1(x_a), y1(y_a), x2(x_b), y2(y_b){};
        
        float getter_x1(){return x1;};
        float getter_y1(){return y1;};
        float getter_x2(){return x2;};
        float getter_y2(){return y2;};
        
        void find_distance()
        {
            dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        };
        float distance_getter()
        {
            return dist;
        }
};
int main()
{
    calculate_distance P(3.3,2.1,4.5,0.6);
    cout<<"For the points: "<<endl<<"X1 = "<<P.getter_x1()<<" Y1 = "<<P.getter_y1()<<endl<<"X2 = "<<P.getter_x2()<<" Y2 = "<<P.getter_y2();
    P.find_distance();
    cout<<endl<<"Distance between these two points = "<<P.distance_getter();
    
    return 0;
}