#include <iostream>
using namespace std;
void fun();
main()
{
 fun();
}
 void fun()
 {
  int sub1=0;
  int sub2=0;
  int sub3=0;
  int sub4=0;
  int sub5=0;
  int sum;
  float per;

  cout<<"Enter subject 01 marks: "<<sub1;
  cin>>sub1;
  cout<<"Enter subject 02 marks: "<<sub2;
  cin>>sub2;
  cout<<"Enter subject 03 marks: "<<sub3;
  cin>>sub3;
  cout<<"Enter subject 04 marks: "<<sub4;

  cin>>sub4;
  cout<<"Enter subject 05 marks: "<<sub5;
  cin>>sub5;
  sum=sub1+sub2+sub3+sub4+sub5;
  per=(sum*100)/500;
  cout<<"Your percentage: "<<per;

 }