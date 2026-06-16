#include <iostream>
using namespace std;

class class_of_distance
{
  private:
    int km, m, cm;
  public:
    class_of_distance (int km1, int m1, int cm1):km(km1), m(m1), cm(cm1){}
    class_of_distance():km(0), m(0), cm(0){}

    int km_getter(){return km;}
    int m_getter(){return m;}
    int cm_getter(){return cm;}

    class_of_distance distance_adder(class_of_distance d1, class_of_distance d2)
    {
      class_of_distance d3;
      
      d3.cm = d1.cm + d2.cm;
      d3.m = d1.m + d2.m + d3.cm / 100;
      d3.cm = d3.cm %100;
      d3.km = d1.km+d2.km + d3.m/1000;
      d3.m = d3.m%1000;

      return d3;
    }
};

int main()
{
  int temp_km, temp_m, temp_cm; class_of_distance d3;

  cout << "Enter distance in format km:m:cm :" << endl<<endl;

  cout << "Enter km:m:cm for Distance_1: ";
  cin >>temp_km>> temp_m >> temp_cm;
  class_of_distance d1(temp_km, temp_m, temp_cm);

  cout << "Enter km:m:cm for Distance_2: ";
  cin >>temp_km>> temp_m >> temp_cm;
  class_of_distance d2(temp_km, temp_m, temp_cm);

  d3 = d3.distance_adder(d1, d2);

  cout << "The sum of the given two distances is as follows: " << endl
       << d3.km_getter() << "km " << d3.m_getter() << "m "<< d3.cm_getter() << "cm";

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