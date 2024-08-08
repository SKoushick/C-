#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the last number";
    cin>>a;
    int count=0;
    for(int i=0;i<=a;i++){
            count=i+count;
    }
    cout<<"this is the count of values"<<count;

}
