#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter First Number:";
    cin>>a;
    cout<<"Enter second Number:";
    cin>>b;
    cout<<"\n Before Swapping: a="<<a<<",b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"\n After Swapping: a="<<a<<",b="<<b<<endl;
    return 0;
    


    
}