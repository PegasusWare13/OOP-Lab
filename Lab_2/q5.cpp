#include <iostream>
#include <math.h>
using namespace std;
class sum_of_complex_nums{
    private:
        float r1, r2, i1, i2, r, i;
    public:
        sum_of_complex_nums(float r_1,float i_1,float r_2, float i_2):r1(r_1), i1(i_1), r2(r_2), i2(i_2){};
        
        void sum_of_real_parts()
        {
            r = r1+r2;
        };
        void sum_of_imaginary_parts()
        {
            i = i1+i2;
        }
        
        float getter_r1(){return r1;}
        float getter_i1(){return i1;}
        float getter_r2(){return r2;}
        float getter_i2(){return i2;}
        float getter_r(){return r;}
        float getter_i(){return i;}
};
int main()
{
    sum_of_complex_nums C(3,4,5,6);
    C.sum_of_real_parts();
    C.sum_of_imaginary_parts();
    cout<<"For complex numbers: "<<endl<<"C1: "<<C.getter_r1()<<"+"<<C.getter_i1()<<"i"<<endl<<"C2: "<<C.getter_r2()<<"+"<<C.getter_i2()<<"i";
    cout<<endl<<"C = C1 + C2 = "<<C.getter_r()<<"+"<<C.getter_i()<<"i";
    return 0;
}