#include <iostream>

using namespace std;

class Arr{
public:
    int insertion(){

    int a;
    cout<<"enter the values:"<<endl;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cout<<"enter the values added in array";
        cin>>b[i];
    }

    // 1st for


    for(int j=0;j<a;j++){
                cout<<b[j]<<endl;


    }
    //2nd for

    cout<<"this is the first element in the array:"<<b[0]<<endl;
    cout<<"this is the second element in the array:"<<b[a-1]<<endl;



    }
};

int main()
{
    Arr obj;
    obj.insertion();
}
