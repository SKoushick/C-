#include <iostream>;
using namespace std;
int main(){
    int year;
    cout<<"Enter the year to check for leap year:";
    cin>>year;
    if (year%400==0)
    {
        cout<<" is a leap year !"<<year<<endl;
    }
    else if ((year%4==0)  &&  (year%100!=0))
    {
        cout<<" is a leap year !"<<year<<endl;
    }
    else
    {
        cout<<" is not a leap year !"<<year<<endl;
    }

    }
