//function template overloading
#include <iostream>
using namespace std;
template <class tem>
void display(tem data)
{
    cout<<"Generic data = "<<data<<endl;
}
void display(int data)
{
    cout<<"Integer Type Data = "<<data<<endl;
}
int main()
{
    display(123); //displays "integer type data = 123"
    display(123.12);//displays "Generic type data = 123.12" and so on for felow function calls that will use the function with template data type
    display("Nepal");
    display(123456);//should display "Generic type data = 123456" but it doesn't maybe due to compiler specificifity?
    return 0;
}