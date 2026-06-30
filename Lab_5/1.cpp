#include <iostream>
using namespace std;
class concatenate{
    private:
        string name;
    public:
        concatenate(string N): name(N){}
        concatenate():name(""){}
        string name_getter()
        {
            return name;
        }
        concatenate operator - (concatenate c2)
        {
            concatenate result;
            result.name = this->name + c2.name;
            return result;
        }
};
int main()
{
    concatenate c1("Alexander "), c2("The Great");
    concatenate c3;
    c3 = c1-c2;
    cout<<"String from object c1 = "<<c1.name_getter()<<endl;
    cout<<"String from object c2 = "<<c2.name_getter()<<endl;
    cout<<"Concatenated String  = "<<c3.name_getter();
    return 0;
}