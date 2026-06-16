#include <iostream>
using namespace std;
class class_2;
class class_1
{
    private: 
        int num_1;
    public:
        class_1(int n):num_1(n){}
        friend int sum(class_1 num_1, class_2 num_2);
        
};
class class_2
{
    private: 
        int num_2;
    public:
        class_2(int n):num_2(n){}
        friend int sum(class_1 num_1, class_2 num_2);
        
};
int sum(class_1 c1, class_2 c2)
{
    return c1.num_1+c2.num_2;
}
int main()
{
    class_1 c1(5); class_2 c2(10);
    cout<<"Sum of member functions of 2 different classes = "<<sum(c1, c2);
    return 0;
}