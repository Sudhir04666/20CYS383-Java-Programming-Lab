#include<iostream>
using namespace std;

class array_details{
    public:
    int a[10];

    void readarray(){
    int i;
    cout<<"enter array member";
    for(i=1;i<=10;i++)
    cin>>a[i];
    }
};

class functions : public array_details{
    
};