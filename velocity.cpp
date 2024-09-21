#include<iostream>
using namespace std;
main()
{
int initial_v, time, acc;
int final_v;
cout << "Enter the Inital Velocity (m/s): " ;
cin >> initial_v;
cout << "Enter the Accleration (m/s^2): " ;
cin >> acc;
cout << "Enter the Time (s): " ;
cin >> time;
final_v = (acc*time) + initial_v;
cout<<"Final Velocity (m/s) :" <<final_v;
}


