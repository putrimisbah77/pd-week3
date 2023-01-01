#include <iostream>
using namespace std;
void fun();
main()
{
 fun();
}
 void fun()
 {
  float priceperkgv;
 float priceperkgf;
 int totalkgv;
 int totalkgf;
 float tv;
 float tf;
 float tc;
 float total;
 while(true)
 {
 cout << "Enter price per kilogramme of vegetable: ";
 cin >> priceperkgv;
 cout << "Enter price per kilogramme of fruits: ";
 cin >> priceperkgf;
 cout << "Enter total kilogramme of vegetable: ";
 cin >> totalkgv;
 cout << "Enter total kilogramme of fruit: ";
 cin >> totalkgf;
 tv=priceperkgv*totalkgv;
 tf=priceperkgf*totalkgf;
 tc=tv+tf;
 total=tc*0.515;
 cout<<"total price in pkr: "<<total;
 cout<<endl;
 }
 }