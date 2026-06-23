#include <iostream>
using namespace std;

class class_1
{
private:
    int num;
public:
    class_1():num(25) {}
    int num_getter(){ return num;}
    class_1 operator+()
    {
        num++;
        return *this;
    }
};

int main()
{
    class_1 o1;
    cout <<"Initial value of num: "<<o1.num_getter()<<endl;
    +o1; 
    cout <<"Final value of num: "<< o1.num_getter()<<endl;
    return 0;
}