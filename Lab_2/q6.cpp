#include <iostream>
#include <math.h>
using namespace std;
class converter{
    private:
        int inch, feet, remaining_inches;
    public:
        void inch_setter(int i)
        {
            inch = i;
        }
        void inches_to_feet()
        {
            if(inch<12){
                feet=0;
                remaining_inches = inch%12;
            }
            else{
                feet = inch/12;
                remaining_inches = inch%12;
            }
        }
        int feet_getter(){return feet;}
        int remaining_inch_getter(){return remaining_inches;}
        
};
int main()
{
    converter L1; int temp_inch_holder;
    cout<<"Enter the length in inches: ";
    cin>>temp_inch_holder;
    L1.inch_setter(temp_inch_holder);
    L1.inches_to_feet();
    cout<<"Given inches converted to feet becomes: "<<L1.feet_getter()<<" ft and "<<L1.remaining_inch_getter()<<" inches";
    return 0;
}