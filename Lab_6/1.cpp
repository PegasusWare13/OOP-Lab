#include <iostream>
using namespace std;
class fahrenheit{//destination
    private:
        float F;
    public:
    fahrenheit():F(0){}
    fahrenheit(float f):F(f){}

    float F_getter()
    {
        return F;
    }
};
class celcius{//source class
    private:
        float C;
    public:
        celcius(float deg):C(deg){}
        float C_getter()
        {
            return C;
        }
        operator fahrenheit(){
            float temp_F;
            temp_F = C*1.8+32;
            return fahrenheit(temp_F);
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