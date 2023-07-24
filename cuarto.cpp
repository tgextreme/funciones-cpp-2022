#include <iostream>

using namespace std;

int main()
{
     int years, days, hours, minutes, seconds;

     cout<<"writte years"<<endl;
     cin>>years;
     cout<<"writte days"<<endl;
     cin>>days;
     cout<<"writte hours"<<endl;
     cin>>hours;
     cout<<"writte minutes"<<endl;
     cin>>minutes;
     cout<<"writte seconds"<<endl;
    cin>>seconds;
    
    seconds=seconds+(minutes*60)+(hours*3600)+(years*31536000)+(days*86400);

    cout<<" it's: "<< seconds<<endl;


    return 0;
}