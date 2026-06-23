#include <iostream>
using namespace std;
class class_2;
class class_1
{
    private:
        int num_1;
    public:
        class_1():num_1(5){}
        friend class class_2;
};
class class_2
{
    public:
        int num_1_getter_from_class_1(class_1 obj1){return obj1.num_1;}
};
int main()
{
    class_1 oc1; class_2 oc2;
    cout<<"Displaying a variable belonging to class_1 through the user defined functio in class_2: "<<oc2.num_1_getter_from_class_1(oc1);
    return 0;
}