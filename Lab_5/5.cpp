#include <iostream>
using namespace std;
class class_to_basic
{
    private:
        int inch;
    public:
        class_to_basic(int i):inch(i){}

        operator int()
        {
            return inch/12;
        }
        int inch_getter(){return inch;}
};
int main()
{
    int length_in_inch; int feet;
    cout<<"Enter a length in inch = ";
    cin>>length_in_inch;
    class_to_basic e1(length_in_inch);
    feet = e1;
    cout<<e1.inch_getter()<<" inches is around "<<feet<<" feets";
    return 0;
}