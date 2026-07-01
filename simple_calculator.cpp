#include<iostream>
using namespace std;
int main()
{
    double a,b;
    char op;
    cout << "enter operator(+,-,*,/)";
    cin >> op;

    cout << "enter two numbers:";
    cin >> a >> b;
    
    switch(op)
    {
    case '+':
    cout << "result is=" << a+b;
    break;
    case '-':
    cout << "result is=" << a-b;
    break;
    case '*':
    cout << "result is=" << a*b;
    break;
    case '/':
    if(b!=0)
    cout << "result is=" << a/b;
    else
    cout << "not divide by zero:";
    break;
    default:
    cout << "invalid operator:";
    break;
}
    return 0;
}

