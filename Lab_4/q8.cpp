#include <iostream>
using namespace std;
class time
{
  private:
    int day, hour, minute, second;
  public:
    void time_setter(int d, int hr, int min, int sec)
    {
      day = d;
      hour = hr;
      minute = min;
      second = sec;
    }

    int day_getter(){return day;}
    int hour_getter(){return hour;}
    int minute_getter(){return minute;}
    int second_getter(){return second;}

    time operator+(time t2)
    {
      time t3;
      t3.second = this->second + t2.second;
      t3.minute = this->minute + t2.minute + t3.second/60;
      t3.second = t3.second%60;

      t3.hour = this->hour + t2.hour + t3.minute/60;
      t3.minute = t3.minute%60;

      t3.day = this->day + t2.day + t3.hour/24;
      t3.hour = t3.hour%24;
      return t3;
    }
};
int main()
{
  time t1, t2, t3; int temp_day, temp_hour, temp_min, temp_sec;

  cout<<"Enter time in format dd:hr:min:sec:"<<endl;

  cout<<"Enter data for Time-1: ";
  cin>>temp_day>>temp_hour>>temp_min>>temp_sec;
  t1.time_setter(temp_day, temp_hour, temp_min, temp_sec);

  cout<<"Enter data for Time-2: ";
  cin>>temp_day>>temp_hour>>temp_min>>temp_sec;
  t2.time_setter(temp_day, temp_hour, temp_min, temp_sec);

  t3 = t1+t2;

  cout<<"The sum of the given two time periods is as follows: "<<endl<<t3.day_getter()<<" days "<<t3.hour_getter()<<" hours "<<t3.minute_getter()<<" minutes "<<t3.second_getter()<<" seconds ";
  return 0;
}
