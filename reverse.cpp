#include <iostream>
    using namespace std;

class rev{
public:


    void revers(){
    int range;
    cout<<"enter the value=";
    cin>>range;
    int arr[range];
    for(int i=0;i<range;i++){

    cout<<"enter the array elements=";
    cin>>arr[i];
    }
    int b[range];

    for(int i=0;i<range;i++){

        b[i]=arr[sizeof(arr)/4-(i+1)];
    }
    for (int i = 0; i< range; i++){

     cout<<b[i];

    }


}

};


int main()
{
    rev var;
    var.revers();

}
