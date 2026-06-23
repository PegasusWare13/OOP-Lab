#include <iostream>
using namespace std;
class complex
{
    private:
        int real, img;
    public:
        complex(int r, int i):real(r), img(i){}
        complex():real(0), img(0){}

        int real_getter(){return real;} 
        int img_getter(){return img;} 

        complex operator - (complex cmplx2)
        {
            complex temp;
            temp.real = this->real + cmplx2.real;
            temp.img = this->img + cmplx2.img;
            return temp;
        }

};
int main()
{
    int temp_r, temp_i;
    cout<<"Enter the value of 1st complex number: ";
    cin>>temp_r>> temp_i;
    complex c1(temp_r, temp_i);
    cout<<"Enter the value of 2nd complex number: ";
    cin>>temp_r>> temp_i;
    complex c2(temp_r, temp_i);
    complex c3;
    c3 = c1-c2;
    cout<<"For complex numbers: "<<endl<<"C1: "<<c1.real_getter()<<"+"<<c1.img_getter()<<"i"<<endl<<"C2: "<<c2.real_getter()<<"+"<<c2.img_getter()<<"i";
    cout<<endl<<"C = C1 + C2 = "<<c3.real_getter()<<"+"<<c3.img_getter()<<"i";
    return 0;
}