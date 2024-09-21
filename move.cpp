#include<iostream>
using namespace std;
main()
{
int age, no_move;
float average;
cout<<"Enter the person's age: " ;
cin>>age;
cout<<"Enter the number of times they've moved: " ;
cin>>no_move;
average=(age/(no_move+1));
cout<<"Average number of years lived in the same house: "<< average;
}

