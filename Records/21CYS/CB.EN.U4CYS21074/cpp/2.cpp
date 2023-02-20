#include<iostream>
using namespace std;

class x{
    private:
    int a=1;

    public:
    int b=2;

    protected:
    int c=3;
};

class y : protected x{
    public:
    void fun(){
       /* cout<<a; private variable cant be accessed*/
        cout<<b;
        cout<<c;
    };
};

int main(){

    y a;
    a.fun();
    x b;
    int c=b.b;
    cout<<c;
}