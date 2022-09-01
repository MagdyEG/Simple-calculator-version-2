#include <iostream>
#include<string>
using namespace std;

int main()
{
int x,y;
char a;
    cout<<"enter two number \n";
    cin>>x>>y;
cin >> a;
switch(a)
{

case '+' : cout << x+y;
break;

case '-' : cout << x-y;
break;

case '/' : cout << x/y;
break;

case '*' : cout << x*y;
break;

}
cout << "\nthanks\n";
    return 0;
}
