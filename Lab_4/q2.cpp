#include <iostream>
using namespace std;
class class_2;
class class_1
{
    private: 
        int num_1;
    public:
        class_1(int n):num_1(n){}
        int num_1_getter(){return num_1;}
        friend void swap(class_1 &obj_1, class_2 &obj_2);
        
};
class class_2
{
    private: 
        int num_2;
    public:
        class_2(int n):num_2(n){}
        int num_2_getter(){return num_2;}
        friend void swap(class_1 &obj_1, class_2 &obj_2);
        
};
void swap(class_1 &obj_1, class_2 &obj_2)
{
    int temp;
    temp = obj_1.num_1;
    obj_1.num_1=obj_2.num_2;
    obj_2.num_2 = temp;
}
int main()
{
    class_1 c1(5); class_2 c2(10);
    cout<<"Initial value of num_1 from object of c1 = "<<c1.num_1_getter()<<endl;
    cout<<"Initial value of num_2 from object of c2 = "<<c2.num_2_getter()<<endl;
    swap(c1, c2);
    cout<<endl<<"Final value of num_1 from object of c1 = "<<c1.num_1_getter()<<endl;
    cout<<"Final value of num_2 from object of c2 = "<<c2.num_2_getter();
    return 0;
}