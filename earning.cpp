#include<iostream>
using namespace std;
main()
{
float veg_kg, fruit_kg;
int total_veg, total_fruits;
float earning;
cout<<"Enter vegetable price per kilogram (in coins): " ;
cin>>veg_kg;
cout<<"Enter fruit price per kilogram (in coins): " ;
cin>>fruit_kg;
cout<<"Enter total kilograms of vegetables : " ;
cin>>total_veg;
cout<<"Enter total kilograms of fruits : " ;
cin>>total_fruits;
earning = ((veg_kg*total_veg)+(fruit_kg*total_fruits))/1.94 ;
cout<<"Total earnings in rupees (Rps) : " << earning;
}


