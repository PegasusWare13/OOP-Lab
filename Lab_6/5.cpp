#include <iostream>
using namespace std;
class Surname
{
    private:
        string surname;
    public:
        Surname():surname("Shrestha"){}
        void display_surname(){
            cout<<"Surname = "<<surname;
        }
};
class Firstname: public Surname
{
    private:
        string firstname;
    public:
        Firstname():firstname("Anwesh"){}
        void display_firstname()
        {
            cout<<"First Name = "<<firstname;
        }
};
int main()
{
    Firstname N;
    N.display_firstname();
    cout<<endl;
    N.display_surname();
    return 0;
}