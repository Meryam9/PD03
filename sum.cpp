#include<iostream>
using namespace std;
main()
{ 
int o,x,x1,y,y1,z,z1,a,sum=0;
cout<<"Enter a 4-digit number: " ;
cin>>o;
x=o%10;
x1=o/10;
y=x1%10;
y1=x1/10;
z=y1%10;
z1=y1/10;
a=z1%10;
sum = x+y+z+a ;
cout<<"Sum of individual digits is: " << sum;
}

