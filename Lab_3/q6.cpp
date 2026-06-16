//detructor example, used DMA
#include <iostream>
using namespace std;
class example_for_destructor
{
    private:
        int* num;
    public:
        example_for_destructor(int n)
        {
            num = new int; //DMA keyword new
            *num = n;
        }
        
        ~example_for_destructor()
        {
            delete num;
        }

        int getter_num() {return *num;}
};
int main()
{
    example_for_destructor E(5);
    cout<<"Value of num = "<<E.getter_num();
    return 0;
}