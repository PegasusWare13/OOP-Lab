#include <iostream>
using namespace std;
class Father
{
    private:
        string father_name;
    public:
        Father():father_name("Max Verstappen"){}
        void display_fatherName(){
            cout<<"Father's name = "<<father_name<<endl;
        }
};
class Mother
{
    private:
        string mother_name;
    public:
        Mother():mother_name("George Russell"){}
        void display_motherName()
        {
            cout<<"Mother's Name = "<<mother_name<<endl;
        }
};
class Son: public Father, public Mother
{
    private:
        string son_name;
    public:
        Son():son_name("Kimi Antonelli"){}
        void display_sonName()
        {
            cout<<"First Name = "<<son_name<<endl;
        }
};
int main()
{
    Son S;
    S.display_fatherName();
    S.display_motherName();
    S.display_sonName();
}