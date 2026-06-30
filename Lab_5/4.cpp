#include <iostream>
using namespace std;
class basic_to_class_exmpl
{
    private:
        int m;
    public:
        basic_to_class_exmpl():m(0){}

        basic_to_class_exmpl(int length_in_cm)
        {
            m = length_in_cm/100;
        }
        int meter_getter(){return m;}
};
int main()
{
    int length_in_cm; basic_to_class_exmpl b1;
    cout<<"Enter a length in centimeters = ";
    cin>>length_in_cm;
    b1 = length_in_cm;
    cout<<"The input cm is equal to "<<b1.meter_getter()<<" meters";
    return 0;
}