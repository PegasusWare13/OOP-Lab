#include <iostream>
using namespace std;
template <class tem>
tem add(tem a, tem b){return a+b;}
int main()
{
    //adding two integers
    int a1, b1;
    cout<<"Enter the value of two integers: ";
    cin>>a1>>b1;
    cout<<"Sum of the integers= "<<add(a1,b1)<<endl<<endl;

    //adding two floats
    float c1, d1;
    cout<<"Enter the value of two floats: ";
    cin>>c1>>d1;
    cout<<"Sum of the floats= "<<add(c1, d1);
    return 0;
}