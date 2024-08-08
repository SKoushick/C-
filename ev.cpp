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
        cin>>b[i];
    }

    // 1st for


    for(int j=0;j<a;j++){
            if(j%2==0){
                   cout<<"";
            }
            else{
                    cout<<b[j]<<" ";
;            }

    }


    }

};

int main(){
Arr obj;
obj.insertion();
}

