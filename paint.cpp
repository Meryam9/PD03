#include<iostream>
using namespace std;
main()
{
int no_meter, width, height, painted_walls;
cout << "Number of square meters you can paint: " ;
cin >> no_meter;
cout << "Width of single wall (in meters): " ;
cin >> width;
cout << "Height of single wall (in meters): " ;
cin >> height;
painted_walls = no_meter/(width*height);
cout << "Number of walls you can paint: " << painted_walls;

}
