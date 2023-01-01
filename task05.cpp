#include <iostream>
using namespace std;
void fun();
main()
{
 fun();

}
 void fun()
 {
  int weight;
  int total;

  cout<<"Enter Weight that you want to loose: ";
  cin>>weight;
  total=weight*15;
  cout<<"it will take "<<total << " Days to loose "<<weight;


 }