//constructors and constructor overloading
#include <iostream>
using namespace std;
class example_for_constructors
{
    private:
        int id; string name;
    public:
        example_for_constructors(int ID, string NAME):id(ID), name(NAME){}
        //list initializer type of constructor in CPP
        example_for_constructors():id(333), name("Hamilton"){}//constructor overloading

        int id_getter(){return id;}
        string name_getter(){return name;}
};
int main()
{
    example_for_constructors E1, E2(11, "Anwesh");
    cout<<"For Object E1 initialized using a default constructor: "<<endl<<"ID: "<<E1.id_getter()<<" Name: "<<E1.name_getter()<<endl;
    cout<<"For Object E2 initialized using a list initialization: "<<endl<<"ID: "<<E2.id_getter()<<" Name: "<<E2.name_getter()<<endl;
    return 0;
    return 0;
}
/* OUTPUT:
For Object E1 initialized using a default constructor: 
ID: 333 Name: Hamilton
For Object E2 initialized using a list initialization: 
ID: 11 Name: Anwesh */