#include <iostream>
using namespace std;

template <class tem>
void swap1(tem &a, tem &b) //apparently 'swap' is a keyword? Hence, used 'swap1' as the function name
{
    tem temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int ia, ib;
    cout<<"For swapping integers: "<<endl;
    cout<<"Enter the value of integer ia: ";
    cin>>ia;
    cout<<"Enter the value of integer ib: ";
    cin>>ib;
    cout<<"Initial value of ia = "<<ia<<" and ib = "<<ib<<endl;
    swap1(ia, ib);
    cout<<"Final value of ia = "<<ia<<" and ib = "<<ib<<endl;
    cout<<endl<<endl;

    float fa, fb;
    cout<<"For swapping floats: "<<endl;
    cout<<"Enter the value of float fa: ";
    cin>>fa;
    cout<<"Enter the value of float fb: ";
    cin>>fb;
    cout<<"Initial value of fa = "<<fa<<" and fb = "<<fb<<endl;
    swap1(fa, fb);
    cout<<"Final value of fa = "<<fa<<" and fb = "<<fb<<endl;
    cout<<endl<<endl;

    long la, lb;
    cout<<"For swapping long-integers: "<<endl;
    cout<<"Enter the value of integer la: ";
    cin>>la;
    cout<<"Enter the value of integer lb: ";
    cin>>lb;
    cout<<"Initial value of la = "<<la<<" and lb = "<<lb<<endl;
    swap1(la, lb);
    cout<<"Final value of la = "<<la<<" and lb = "<<lb<<endl;

    return 0;
}