#include <iostream>
using namespace std;
class class_1
{
    private:
        int num;
    public:
        class_1(int n):num(n){}
        class_1():num(0){}

        int num_getter(){return num;} 

        class_1 operator + (class_1 obj)
        {
            class_1 temp(0);
            temp.num = this->num + obj.num;
            return temp;
        }

};
int main()
{   
    class_1 obj1(5), obj2(7), sum_obj;
    cout<<"Value of num from obj1 = "<<obj1.num_getter()<<endl<<"Value of num from obj2 = "<<obj2.num_getter()<<endl;
    sum_obj = obj1 +  obj2;
    cout<<"Sum of nums from obj1 and obj2 = "<<sum_obj.num_getter();
    return 0;
}