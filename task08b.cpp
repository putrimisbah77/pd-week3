#include <iostream>
using namespace std;
void fun();
main()
{
 fun();
}
 void fun()
 {
 int num=0;
 int num1;
 int num2;
 int num3;
 int num4;
 int sum;
 cout <<"Enter four digit number: "<<num;
 cin>>num;
 num1=num%10;
 num2=(num/10)%10;
 num3=(num/100)%10;
 num4=(num/1000)%10;
 sum=num1+num2+num3+num4;
 cout<<"Sum is: "<<sum;

 }