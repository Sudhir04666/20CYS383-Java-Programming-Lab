#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    void read(){
        cout<<"real";
        cin>>a;
        cout<<"img";
        cin>>b;
    }
    void add(complex x){
        cout<<this->a+x.a<<"+"<<"i"<<this->b+x.b;
    }
};

int main(){

    complex a,b;
    a.read();
    b.read();
    a.add(b);
}