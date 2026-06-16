//const functions can use both const objects and non const objects. Const objects need to be initialized at the time of declaration
#include <iostream>
using namespace std;
class example
{
    private:
        int num;
    public:
        example(int n):num(n){}
        int return_value() const
        {//ts function cannot change the value of variables
            return num;
        }
        void set_value_to_10() 
        {
            num=10;
        }
};
int main()
{
    const example e1(5); example e2(5);
    cout<<e1.return_value()<<endl;
    // will be error if I use e1.set_value_to_10 but I can use it for non const object e2
    e2.set_value_to_10();
    cout<<e2.return_value();
    return 0;

}