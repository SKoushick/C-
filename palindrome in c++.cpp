
#include <iostream>
using namespace std;

class Palindrome{
public:

void palin()
{
     char c,n,num;
    cout<<"Enter number to be checked for palindrome : ";
    cin>>num;
    n=num;
    while (num>0)
    {
        c=c+(num%10);
        num=num-(num%10);
        c=c*10;
        num=num/10;
    }
    c=c/10;

    if (n==c)
    {
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }

}

};


int main (){
Palindrome obj;
obj.Palindrome :: public palin;

}
