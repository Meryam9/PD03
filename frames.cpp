#include<iostream>
using namespace std;
main()
{
int minutes, frames;
int total_frames;
cout << "Number of minutes: " ;
cin >> minutes;
cout << "Frames per second: " ;
cin >> frames;
total_frames = minutes*frames*60;
cout<<"Total number of Frames is: "<<total_frames;
}