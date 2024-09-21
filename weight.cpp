#include<iostream>
using namespace std;
main()
{
string name;
float target_loss;
float days;
cout<<"Enter the Name of the person: " ;
cin>>name;
cout<<"Enter the target weight loss in kilograms: " ;
cin>>target_loss;
days=target_loss*15;
cout<<name<<" will need "<<days<<" days to lose "<<target_loss<<" kg of weight followed by the doctor's suggestions" ;
}