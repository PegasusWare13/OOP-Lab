#include <iostream>
#include <math.h>
using namespace std;
class calculate_perimeter{
    private:
        float a, b, c, Perimeter, area;
    public:
        calculate_perimeter(float a1,float b1,float c1):a(a1),b(b1),c(c1){};
        
        float getter_a(){return a;};
        float getter_b(){return b;};
        float getter_c(){return c;};
        
        void find_perimeter()
        {
            Perimeter = (a+b+c);
        };
        float perimeter_getter()
        {
            return Perimeter;
        }
        
        void find_area()
        {
            float s = (a+b+c)/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
        };
        float area_getter()
        {
            return area;
        }
};
int main()
{
    calculate_perimeter T(3.2, 4.1, 5.5);
    cout<<"For a triangle with sides: "<<endl<<"a = "<<T.getter_a()<<endl<<"b = "<<T.getter_b()<<endl<<"c = "<<T.getter_c()<<endl;
    T.find_area();
    T.find_perimeter();
    cout<<"Perimeter: "<<T.perimeter_getter()<<endl;
    cout<<"Area: "<<T.area_getter();
    return 0;
}