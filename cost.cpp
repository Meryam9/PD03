#include<iostream>
using namespace std;
main()
{
float size, cost, area, area_foot;
float cost_pound;
cout << "Enter the size of fertilizer bag in pounds: " ;
cin >> size;
cout << "Enter the cost of bag: $"  ;
cin >> cost;
cout<<"Enter the area in square feet that can be covered by the bag: " ;
cin>>area;
cost_pound = cost/size;
cout<<"Cost of fertilizing per pound:  $" <<cost_pound << endl;
area_foot = area*size;
cout<<"Cost of fertilizing per square foot: $" <<area_foot ;
}