#include<iostream>
using namespace std;
int main()
{
int n;
cout << "enter a year:";
cin >> n;
if(( n % 400 == 0) || (( n % 4 == 0 ) && ( n % 100 != 0 )))
cout << "it is a leap year :";
else
cout << "it is not a leap year:";
return 0;
}

