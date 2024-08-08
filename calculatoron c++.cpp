#include <iostream>
using namespace std;
int f,b;
int main(){
    char a;
char pls='+',miu='-',mul='*',div='/';

cout<<"enter the first number"<<endl;
cin>>b;
cout<<"enter the second number"<<endl;
cin>>f;
cout<<"enter the operation"<<endl;
cin>>a;
if (a=='+')
{
    cout<<"Final answer :"<<b+f;
}
else if (a=='-')
{
    cout<<"Final answer :"<<b-f;
}
else if (a=='*')
{
    cout<<"Final answer :"<<b*f;
}
else if (a=='/')
{
    cout<<"Final answer :"<<b/f;
}
}
