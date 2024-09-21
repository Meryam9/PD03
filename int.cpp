#include<iostream>
using namespace std;
main()
{
int i, sum=0;
for(i=1;i<=5;i++)
{
cout<<"Enter an integer: " ;
cin>>i;
sum=sum + i;
}
cout<<"The sum of five integers entered by the user is: " << sum;
}
