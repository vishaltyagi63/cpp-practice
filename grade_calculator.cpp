#include<iostream>
using namespace std;
int main()
{
    int n;
cout << "enter your marks:";
cin >> n;
if (n>100)
cout << "error! wrong input:";
else if(n<=100 && n>=90)
cout << "A grade:";
else if (n <90 && n >=80)
cout << "B grade:";
else if (n <80 && n >=70)
cout << "C garde:";
else if (n <70 && n>=60)
cout << "D grade:";
else if (n<60 && n>=50)
cout << "E grade:";
else 
cout << "you are fail:";
return 0;

}
