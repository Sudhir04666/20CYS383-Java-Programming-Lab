#include <iostream>
using namespace std;
int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    a=4;
    b=5;
    swap(a,b);
    cout<<a<<b;   
}