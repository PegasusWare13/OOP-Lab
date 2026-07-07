#include <iostream>
using namespace std;
class Constructor
{
    private:
        string Constructor_name;
    public:
        Constructor():Constructor_name("Red Bull"){}
        void display_Constructor()
        {
            cout<<"Constructor: "<<Constructor_name<<endl;
        }
};
class Driver: public Constructor
{
    private:
        string Driver_name;
    public:
        Driver():Driver_name("Max Verstappen"){}
        void display_Driver()
        {
            cout<<"Driver: "<<Driver_name<<endl;
        }
};
class RaceEngineer: public Driver
{
    private:
        string Race_Engineer_Name;
    public:
        RaceEngineer():Race_Engineer_Name("Lambiase"){}
        void display_Race_engineer_name()
        {
            cout<<"Driver: "<<Race_Engineer_Name<<endl;
        }
};
int main()
{
    RaceEngineer E;
    E.display_Race_engineer_name();
    E.display_Driver();
    E.display_Constructor();
    return 0;
}

