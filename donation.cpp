#include<iostream>
using namespace std;
main()
{
string movie;
int a_ticket, c_ticket, percentage;
int no_at, no_ct;
cout<<"Enter the movie name: " ;
cin>>movie;
cout<<"Enter the adult ticket price: $" ;
cin>>a_ticket;
cout<<"Enter the child ticket price: $" ;
cin>>c_ticket;
cout<<"Enter the number of adult tickets sold: " ;
cin>>no_at;
cout<<"Enter the number of child tickets sold: " ;
cin>>no_ct;
cout<<"Enter the percentage of the amount to be donated to the charity: " ;
cin>>percentage;
cout<<endl;
cout<<"Movie: "<<movie << endl;
int total_amount, remaining;
float donation;
total_amount = (a_ticket*no_at)+(c_ticket*no_ct);
donation = (total_amount*10)/100;
remaining = total_amount - donation;
cout<<"Total amount generated by ticket sales: $" << total_amount << endl;
cout<<"Donation to charity (10%): $"<< donation << endl;
cout<<"Remaining amount after donation: $" << remaining ;
}





