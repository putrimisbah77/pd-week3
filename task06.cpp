#include <iostream>
using namespace std;
void fun();
main()
{
 fun();

}
 void fun()
 {
  int size;
  int cost;
  int square;
  int perpound;
  int persquare;

  cout<<"Enter bag size in pound: ";
  cin>>size;
  cout<<"Enter cost of the bag : ";
  cin>>cost;
  cout<<"Enter area covered by each bag in square feet: ";
  cin>>square;
  perpound=cost/size;
  cout<<"Cost of fertilizer per pound: " <<perpound<<endl;
  persquare=cost/square;
  cout<<"Cost of fertilizer per square feet: "<<persquare;

 }