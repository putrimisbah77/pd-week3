#include <iostream>
using namespace std;
void fun();
main()
{
 fun();
}
 void fun()
 {
  int inp;
  int nbr;
  int sum;

  cout<<"Enter Integer: ";
  cin>>inp;
  cout<<"Enter Integer: ";
  cin>>nbr;
  sum=inp+nbr;
  cout<<"sum: " <<sum;
 }