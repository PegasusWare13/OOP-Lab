#include <iostream>
using namespace std;
class fahrenheit;//destination class
class celcius{//source class
    private:
        float C;
    public:
        celcius(float deg):C(deg){}
        float C_getter()
        {
            return C;
        }
};
class fahrenheit{//destination
    private:
        float F;
    public:
    fahrenheit():F(0){}

    fahrenheit(celcius CD)
    {
         F = 1.8*CD.C_getter()+32;
    }
    float F_getter()
    {
        return F;
    }
};
int main()
{
    float temp_Celcius;
    cout<<"Enter temperature in degree celcius: ";
    cin>>temp_Celcius;
    celcius T1(temp_Celcius);
    fahrenheit T2;
    T2 = T1;
    cout<<"Temperature in Fahrenheit scale = "<<T2.F_getter();
    return 0;
}