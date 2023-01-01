#include <iostream>
using namespace std;
void fun();
main()
{
 fun();
}
 void fun()
 {
  string movie;
  int dtp;
  int ctp;
  int tdtp;
  int tctp;
  int per;
  int tag;
  int aad;
  float total;

cout<<"Enter Movie name: ";
cin>>movie;
cout<<"Enter Adult ticket price: ";
cin>>dtp;
cout<<"Enter child ticket price: ";
cin>>ctp;
cout<<"Enter amount of adult ticket sold: ";
cin>>tdtp;
cout<<"Enter amount of child ticket sold: ";
cin>>tctp;
cout<<"Enter percentage to donate: ";
cin>>per;
total=dtp*tdtp + ctp*tctp;
cout<<"Total amount generated: " <<total<<endl;
tag=(total*per)/100;
aad=total-tag;
cout<<"Amount after donation: "<<aad;


 }