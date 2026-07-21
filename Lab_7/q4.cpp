//concept of class template
#include <iostream>
using namespace std;

template <class tem>
class sum
{
    private:
        tem a, b, sum;
    public:
        void input()
        {
            cout<<"Input the value of a and b: ";
            cin>>a>>b;
        }
        void add()
        {
            sum = a+b;
        }
        void display()
        {
            cout<<"Sum = "<<sum<<endl<<endl;
        }
};
int main()
{
    cout<<"For integer addition: "<<endl;
    sum <int> s1;
    s1.input();
    s1.add();
    s1.display();

    cout<<"For float addition: "<<endl;
    sum <float> s2;
    s2.input();
    s2.add();
    s2.display();

    return 0;
}
