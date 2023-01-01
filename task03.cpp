#include <iostream>
using namespace std;
void fun();
main()
{
  fun();
} 
  void fun()
  {
   int acc=0;
   int finalvelo=0;
   int initialvelo=0;
   int time=0;

   cout<<"Enter initial velocity: " <<initialvelo;
   cin>>initialvelo;
   cout<<"Enter acceleration: " <<acc;
   cin>>acc;
   cout<<"Enter time: "<<time;
   cin>>time;
   finalvelo=(acc*time)+initialvelo;
   cout<<"Final velocity: "<<finalvelo;

  }