#include<iostream>
using namespace std;
int main ()
{
    float p,t,r,SI;
    cout<<"Enter Principal Amount:";
    cin>>p;
    cout<<"Enter Rate of Interest:";
    cin>>r;
     cout<<"Enter Time (in years):";
    cin>>t;
    SI=(p*r*t)/100;
    cout<<"Simple Interest is:"<<SI<<endl;
    return 0;
    

}