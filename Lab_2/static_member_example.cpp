#include <iostream>
using namespace std;
class counter
{
    public:
        static int count;
        static int inreament()
        {
            return count++;
        }
};

int counter::count;

int main() {
    counter c1, c2;
    cout << counter::count; 
    counter::inreament(); 
    cout << endl << counter::count; 
    return 0;
}
