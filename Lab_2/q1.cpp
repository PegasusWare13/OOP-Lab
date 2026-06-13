#include <iostream>
using namespace std;
const float PI=3.14159;
class calculate{
    private:
        float radius;
    public:
        calculate(float r):radius(r){}
        float calculate_perimeter()
        {
            return 2*PI*radius;
        };
        float calculate_area()
        {
            return PI*radius*radius;
        }
};
int main()
{
    calculate c1(5.5);
    cout<<"Perimeter of the circle = "<<c1.calculate_perimeter();
    cout<<endl<<"Area of the circle = "<<c1.calculate_area();
    return 0;
}
/* OUTPUT:
Perimeter of the circle = 34.5575
Area of the circle = 95.0331 */