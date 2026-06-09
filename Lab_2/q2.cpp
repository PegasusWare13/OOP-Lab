#include <iostream>
using namespace std;
class calculate{
    private:
        float celcius, fahrenheit;
    public:
        void setter_celcius(float c)
        {
            celcius = c;
        }
        void converter()
        {
            fahrenheit = celcius*1.8+32;
        }
        float fahrenheit_getter()
        {
            return fahrenheit;
        }
};
int main()
{
    calculate T1; float temporary_celcius_holder;
    cout<<"Enter temperature in celcius: ";
    cin>>temporary_celcius_holder;
    T1.setter_celcius(temporary_celcius_holder);
    T1.converter();
    cout<<endl<<"Given temperature in Fahrenheit scale = "<<T1.fahrenheit_getter();
    return 0;
}