#include <iostream>
using namespace std;
class compare{
    private:
        int value;
    public:
        compare(int N):value(N){};
        int value_getter(){return value;}
        bool operator <=(compare o2)
        {
            return (value<=o2.value)?true:false;
        }
};
int main()
{
    int temp_value;
    cout<<"Enter an integer value for object 1 = ";
    cin>>temp_value;
    compare c1(temp_value);
    cout<<"Enter an integer value for object 2 = ";
    cin>>temp_value;
    compare c2(temp_value);
    if(c1<=c2)
    {
        cout<<c1.value_getter()<<" <= "<<c2.value_getter();
    }
    else{
            cout<<c2.value_getter()<<" <= "<<c1.value_getter();

    }

    return 0;
}