#include <iostream>
#include <math.h>
using namespace std;
class sum_of_complex_nums{
    private:
        float r1, i1;
    public:
        sum_of_complex_nums(float r_1,float i_1):r1(r_1), i1(i_1){}
        sum_of_complex_nums():r1(0), i1(0){}
        
        sum_of_complex_nums adder(sum_of_complex_nums c1, sum_of_complex_nums c2)
        {
            sum_of_complex_nums c3;
            c3.r1 = c1.r1 + c2.r1;
            c3.i1 = c1.i1+c2.i1;
            return c3;
        }
        
        float getter_r1(){return r1;}
        float getter_i1(){return i1;}
};
int main()
{
    int temp_r, temp_i;
    cout<<"Enter the value of 1st complex number: ";
    cin>>temp_r>> temp_i;
    sum_of_complex_nums c1(temp_r, temp_i);
    cout<<"Enter the value of 2nd complex number: ";
    cin>>temp_r>> temp_i;
    sum_of_complex_nums c2(temp_r, temp_i);
    sum_of_complex_nums c3;
    c3 = c3.adder(c1, c2);
    cout<<"For complex numbers: "<<endl<<"C1: "<<c1.getter_r1()<<"+"<<c1.getter_i1()<<"i"<<endl<<"C2: "<<c2.getter_r1()<<"+"<<c2.getter_i1()<<"i";
    cout<<endl<<"C = C1 + C2 = "<<c3.getter_r1()<<"+"<<c3.getter_i1()<<"i";
    return 0;
}
/* OUTPUT:
For complex numbers: 
C1: 3+4i
C2: 5+6i
C = C1 + C2 = 8+10i */