#include <iostream>
using namespace std;
class counter
{
    public:
        static int count;
        
        static int increament()
        {
            return count++;
        }
};
int counter::count;
int main() {
    counter c1, c2;
    cout<<c1.count;
    //c1.count++;
    counter::increament();
    cout<<endl<<c2.count;
    return 0;
}