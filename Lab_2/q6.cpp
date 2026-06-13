#include <iostream>
using namespace std;

class class_of_distance
{
  private:
    int feet, inch;
  public:
    void distance_setter(int ft, int i)
    {
      feet = ft;
      inch = i;
    }

    int feet_getter(){return feet;}
    int inch_getter(){return inch;}

    class_of_distance distance_adder(class_of_distance d1, class_of_distance d2)
    {
      class_of_distance d3;
      
      d3.inch = d1.inch + d2.inch;
      d3.feet = d1.feet + d2.feet + d3.inch / 12;
      d3.inch = d3.inch % 12;

      return d3;
    }
};

int main()
{
  class_of_distance d1, d2, d3; int temp_feet, temp_inch;

  cout << "Enter distance in format feet:inch:" << endl;

  cout << "Enter feet and inch for Distance_1: ";
  cin >> temp_feet >> temp_inch;
  d1.distance_setter(temp_feet, temp_inch);

  cout << "Enter feet and inch for Distance_2: ";
  cin >> temp_feet >> temp_inch;
  d2.distance_setter(temp_feet, temp_inch);

  d3 = d3.distance_adder(d1, d2);

  cout << "The sum of the given two distances is as follows: " << endl
       << d3.feet_getter() << " feet " << d3.inch_getter() << " inches";

  return 0;
}
/* OUTPUT:
Enter distance in format feet:inch:
Enter feet and inch for Distance_1: 12
22
Enter feet and inch for Distance_2: 31
9
The sum of the given two distances is as follows: 
45 feet 7 inches */